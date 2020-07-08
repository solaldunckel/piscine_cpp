/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Token.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 11:19:09 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/05 18:41:17 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Token.hpp"

/*
** Constructors & Deconstructors
*/

Token::Token() {
}

Token::Token(int num) {
  type_ = "Num";
  num_ = num;
}

Token::Token(char c) {
  if (c == '(')
    type_ = "ParOpen";
  else if (c == ')')
    type_ = "ParClose";
  else if (c == '+' || c == '-' || c == '/' || c =='*') {
    type_ = "Op";
  }
  op_ = c;
  num_ = 0;
}

Token::~Token() {
  std::cout << "Deconstruct" << std::endl;
}

Token::Token(const Token &copy) {
  *this = copy;
}

/*
** Operators Overload
*/

Token  &Token::operator=(const Token &copy) {
  type_ = copy.type_;
  op_ = copy.op_;
  num_ = copy.num_;
  return (*this);
}

/*
** Functions
*/

std::string &Token::getType() {
  return type_;
}

int Token::getNum() {
  return num_;
}

char Token::getChar() {
  return op_;
}

void Token::printToken() {
  std::cout << " ";
  if (type_ == "Num")
    std::cout << type_ << "(" << num_ << ")";
  else if (type_ == "Op")
    std::cout << type_ << "(" << op_ << ")";
  else
    std::cout << type_;
}

int Token::operate(std::stack<int>& stack) {
  int res = 0;
  std::cout << type_ << "(";
  if (getType() == "Num") {
    stack.push(num_);
    std::cout << num_ << ")" << " | OP Push    ";
  } else {
    std::cout << op_ << ")" << " | OP ";
    if (op_ == '+') std::cout << "Add      ";
    if (op_ == '-') std::cout << "Substract";
    if (op_ == '*') std::cout << "Multiply ";
    if (op_ == '/') std::cout << "Divide   ";
    int a = stack.top();
    stack.pop();
    if (op_ == '+') stack.top() += a;
    if (op_ == '-') stack.top() -= a;
    if (op_ == '*') stack.top() *= a;
    if (op_ == '/') stack.top() /= a;
  }
  std::cout << "| ST ";
  std::stack<int> print = stack;
  while (!print.empty()) {
    std::cout << (res = print.top()) << " ";
    print.pop();
  }
  std::cout << std::endl;
  return res;
}
