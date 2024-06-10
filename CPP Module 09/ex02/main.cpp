/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:06:29 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/10 01:03:20 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void fordJhonson(std::vector<int> &v) {
    if (v.size() == 2) {
        if (v[0] > v[1])
            std::swap(v[0], v[1]);
        return;
    }
    std::vector<int> v1(v.size() / 2), v2(v.size() / 2);
    int i1 = 0, i2 = 0;
    int lastElem = -1;
    for (size_t i = 0; i < v.size(); i+=2) {
        if (i + 1 == v.size())
            lastElem = v[i];
        else if (v[i] > v[i + 1])
            v1[i1++] = v[i + 1], v2[i2++] = v[i];
        else
            v1[i1++] = v[i], v2[i2++] = v[i + 1];
    }
    fordJhonson(v1);
    v = v1;
    for (size_t i = 0; i < v2.size(); i++)
        v.insert(std::lower_bound(v.begin(), v.end(), v2[i]), v2[i]);
    if (lastElem != -1)
        v.insert(std::lower_bound(v.begin(), v.end(), lastElem), lastElem);
}

void fordJhonsonLst(std::list<int> &v) {
    if (v.size() == 2) {
        if (v.front() > v.back())
            v.reverse();
        return;
    }
    std::vector<int> v1(v.size() / 2), v2(v.size() / 2);
    int i1 = 0, i2 = 0;
    int lastElem = -1;
    for (std::list<int>::iterator i = v.begin(); i != v.end(); ) {
        if (std::next(i) == v.end())
            lastElem = *i;
        else if (*i > *std::next(i))
            v1[i1++] = *std::next(i), v2[i2++] = *i;
        else
            v1[i1++] = *i, v2[i2++] = *std::next(i);
        ++i;
        if (i != v.end())
            ++i;
    }
    fordJhonson(v1);
    v.clear();
    for (size_t i = 0; i < v1.size(); i++)
        v.push_back(v1[i]);
    for (size_t i = 0; i < v2.size(); i++)
        v.insert(std::lower_bound(v.begin(), v.end(), v2[i]), v2[i]);
    if (lastElem != -1)
        v.insert(std::lower_bound(v.begin(), v.end(), lastElem), lastElem);
}


int main(int argc, char **argv) {
    if (argc == 1) {
        std::cerr << "Usage: ./PmergeMe [arg1] [arg2] ... [argN]" << std::endl;
        return 1;
    }
    std::vector<std::string> v1(argv + 1, argv + argc);
    std::vector<int> v;
    for (size_t i = 0; i < v1.size(); i++) {
        for (size_t j = 0; j < v1[i].size(); j++)
            if (!std::isdigit(v1[i][j])) {
                std::cerr << "Error: value should be a positive int" << std::endl;
                return 1;
            }
        long tmp = strtol(v1[i].c_str(), NULL, 10);
        if (tmp > INT_MAX || tmp < 0) {
            std::cerr << "Error: invalid value format" << std::endl;
            return 1;
        }
        v.push_back(tmp);
    }
    std::cout << "Before: ";
    for (size_t i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
    std::list<int> lst(v.begin(), v.end());
    std::cout << "Before: ";
    for (std::list<int>::iterator i = lst.begin(); i != lst.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;
    std::chrono::time_point<std::chrono::high_resolution_clock> start = std::chrono::high_resolution_clock::now();
    fordJhonson(v);
    std::chrono::time_point<std::chrono::high_resolution_clock> end = std::chrono::high_resolution_clock::now();
    std::cout << "After: ";
    for (size_t i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
    std::cout << "Time: " << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << "us" << std::endl;
    start = std::chrono::high_resolution_clock::now();
    fordJhonsonLst(lst);
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Time: " << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << "us" << std::endl;
    std::cout << "After: ";
    for (std::list<int>::iterator i = lst.begin(); i != lst.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;
    
    return 0;
}
