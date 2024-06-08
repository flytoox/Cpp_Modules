/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:53:09 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/08 21:38:30 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <cstdlib>

int main() {
    srand(time(NULL));
    MutantStack<int> mstack;
    std::list<int> lst;
    for (int i = 0; i < 15; i++) {
        int tmp = rand() %100;
        mstack.push(tmp);
        lst.push_back(tmp);
    }
    std::cout << "My Stack top(): " << mstack.top() << std::endl;
    std::cout << "List top(): " << lst.back() << std::endl;
    mstack.pop();
    lst.pop_back();
    std::cout << "My Stack size(): " << mstack.size() << std::endl;
    std::cout << "List size(): " << lst.size() << std::endl;
    
    std::cout << "My Stack:" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "----------------\nLst:" << std::endl;
    std::list<int>::iterator itLst = lst.begin();
    std::list<int>::iterator iteLst = lst.end();
    ++itLst;
    --itLst;
    while (itLst != iteLst) {
        std::cout << *itLst << std::endl;
        ++itLst;
    }
    return 0;
}
