/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 12:16:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/08/20 17:23:32 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
int main()
{
  std::cout << "My Stack" << std::endl;

  MutantStack<int> mstack;

  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  //[...]
  mstack.push(0);

  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;

  while (it != ite)
  {
    std::cout << *it << std::endl;
    ++it;
  }

  std::stack<int> s(mstack);

  std::cout << "\nTest with List" << std::endl;

  std::list<int> lstack;

  lstack.push_back(5);
  lstack.push_back(17);
  std::cout << lstack.back() << std::endl;
  lstack.pop_back();
  std::cout << lstack.size() << std::endl;
  lstack.push_back(3);
  lstack.push_back(5);
  lstack.push_back(737);
  //[...]
  lstack.push_back(0);

  std::list<int>::iterator it2 = lstack.begin();
  std::list<int>::iterator ite2 = lstack.end();
  ++it2;
  --it2;

  while (it2 != ite2)
  {
    std::cout << *it2 << std::endl;
    ++it2;
  }
  return 0;
}
