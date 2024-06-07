/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 04:39:52 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/07 04:43:27 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void print(T const &x) {
    std::cout << x << " ";
}

int main() {
    int tab[] = {0, 1, 2, 3, 4};
    iter(tab, 5, print);
    std::cout << std::endl;
    std::string s[] = {"one", "two", "three", "four", "five"};
    iter(s, 5, print);

    return 0;
}