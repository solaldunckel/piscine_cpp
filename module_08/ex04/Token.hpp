/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Token.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 11:19:09 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/08 14:32:37 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_HPP
# define TOKEN_HPP

# include <iostream>
# include <vector>
# include <queue>
# include <stack>

class Token {
 public:
  // Constructors & Deconstructors
  Token();
  Token(char c);
  Token(int num);
  Token(const Token &copy);
  ~Token();

  // Operators
  Token &operator=(const Token &copy);

  // Functions
  std::string &getType();
  int getNum();
  void printToken();
  char getChar();
  int operate(std::stack<int>& stack);

 private:
  std::string type_;
  int num_;
  char op_;
};

#endif
