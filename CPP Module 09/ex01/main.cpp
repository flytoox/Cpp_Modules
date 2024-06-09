/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:54:25 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/09 18:13:31 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#define operators(x) (x == '+' || x == '-' || x == '*' || x == '/')
int toNum(std::string &s) {
    size_t i = 0;
    int res = 0;
    int sign = 1;
    if (s[0] == '-') {
        sign = -1;
        i++;
    }
    for (; i < s.size(); i++) {
        if (!isdigit(s[i]) || res)
            return 10;
        if (s[i] != '0') res = s[i] - '0';
    }
    return res * sign;
}

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "Usage: ./RPN \"expression\"" << std::endl;
        return 1;
    }
    std::stringstream ss(av[1]);
    std::stack<int> stack;
    std::string item;

    while (ss >> item) {
        if (item.size() == 1 && operators(item[0])) {
            if (stack.size() < 2) {
                std::cerr << "Error: invalid expression" << std::endl;
                return 1;
            }
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            if (item[0] == '+')
                stack.push(b + a);
            else if (item[0] == '-')
                stack.push(b - a);
            else if (item[0] == '*')
                stack.push(b * a);
            else if (item[0] == '/') {
                if (a == 0) {
                    std::cerr << "Error: division by zero" << std::endl;
                    return 1;
                }
                stack.push(b / a);
            }
        } else {
            int num = toNum(item);
            if (num == 10) {
                std::cerr << "Error: invalid expression" << std::endl;
                return 1;
            }
            stack.push(num);
        }
    }
    if (stack.size() > 1) {
        std::cerr << "Error: there is numbers left" << std::endl;
        return 1;
    }
    std::cout << stack.top() << std::endl;
    return 0;
}