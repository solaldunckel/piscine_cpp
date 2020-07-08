/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 11:19:09 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/05 18:43:28 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Token.hpp"
#include <stack>
#include <queue>

#define PRINT(value) (std::cout << value)

bool  is_operator(char c) {
  return c == '*' || c  == '/' || c == '+' || c == '-';
}

bool  is_parenthesis(char c) {
  return c == '(' || c  == ')';
}

bool  is_digit(char c) {
  return c >= '0' && c  <= '9';
}

int precedence(char x) {
  if (x == '(')
    return 0;
  else if (x == '+' || x == '-')
    return 1;
  else if (x == '*' || x == '/')
    return 2;
  return 3;
}

void  parse_tokens(std::string str, std::vector<Token*>& token_list) {
  int pos = 0;
  while (str[pos] != 0) {
    if (is_digit(str[pos])) {
      int pos2 = pos;
      while (is_digit(str[pos2]))
        pos2++;
      Token *T = new Token(std::atoi(&str[pos]));
      token_list.push_back(T);
      pos = pos2;
    }
    if (is_parenthesis(str[pos]) || is_operator(str[pos])) {
      Token *T = new Token(str[pos]);
      token_list.push_back(T);
    }
    pos++;
  }
}

void infixToPostfix(std::vector<Token*>& token_list, std::vector<Token*>& postfix) {
  std::stack<Token*> s;
  for (std::vector<Token*>::iterator it = token_list.begin();
        it != token_list.end(); it++) {
    if ((*it)->getType() == "Num")
      postfix.push_back(*it);
    else if ((*it)->getChar() == '(')
      s.push(*it);
    else if ((*it)->getChar() == ')') {
      while (!s.empty()) {
        *it = s.top();
        s.pop();
        if ((*it)->getChar() == '(')
          break;
        postfix.push_back(*it);
      }
    } else {
      while (!s.empty() && precedence((*it)->getChar()) <= precedence(s.top()->getChar())) {
        postfix.push_back(s.top());
        s.pop();
      }
      s.push(*it);
    }
  }
  while (!s.empty()) {
    postfix.push_back(s.top());
    s.pop();
  }
}

void operate(std::vector<Token*>& token_list) {
  std::stack<int> s;
  int res = 0;
  for (std::vector<Token*>::iterator it = token_list.begin();
        it != token_list.end(); it++) {
        res = (*it)->operate(s);
  }
  std::cout << "Result : " << res << std::endl;
}

void print_list(std::vector<Token*>& token_list) {
  for (std::vector<Token*>::iterator it = token_list.begin();
        it != token_list.end(); it++) {
      (*it)->printToken();
  }
  std::cout << std::endl;
}

void delete_list(std::vector<Token*>& token_list) {
  for (std::vector<Token*>::iterator it = token_list.begin();
        it != token_list.end(); it++) {
      // (*it)->printToken();
      // std::cout << std::endl;
      // delete *it;
  }
}

int check_error(std::vector<Token*>& token_list) {
  std::string lastType;
  int scope = 0;
  for (std::vector<Token*>::iterator it = token_list.begin();
        it != token_list.end(); it++) {
      if (lastType.empty() && (*it)->getType() == "Op")
        return 1;
      if (!lastType.empty() && lastType != "ParOpen"
        && lastType != "ParClose" && lastType == (*it)->getType())
        return 1;
      lastType = (*it)->getType();
      if (lastType == "ParOpen")
        scope++;
      else if (lastType == "ParClose")
        scope--;
  }
  if (lastType.empty() || lastType == "Op" || scope != 0)
        return 1;
  return 0;
}

int main(int argc, char **argv) {
  std::vector<Token*> token_list;

  if (argc == 2) {
    parse_tokens(argv[1], token_list);
    if (check_error(token_list)) {
      std::cout << "Invalid expression." << std::endl;
      return 1;
    }
    std::cout << "Tokens:";
    print_list(token_list);
    std::vector<Token*> output;
    infixToPostfix(token_list, output);
    std::cout << "Postfix:";
    print_list(output);
    operate(output);
    delete_list(token_list);
  }
  else
    return 1;
  return 0;
}
