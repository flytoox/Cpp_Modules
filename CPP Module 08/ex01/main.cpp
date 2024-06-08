/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:46:51 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/08 20:39:20 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main() {
    srand(time(NULL));
    Span sp = Span(2e4);
    for (int i = 0; i < 2e4; i++)
        sp.addNumber(rand());
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    
    try {
        sp.addNumber(42);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    
    try {
        Span ss;
        ss.shortestSpan();
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}