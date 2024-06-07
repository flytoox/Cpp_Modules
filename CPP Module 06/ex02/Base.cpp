/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 02:36:13 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/07 02:43:38 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {
}

Base *generate(void) {
    srand(time(NULL));
    int r = rand() % 3;
    if (!r)
        return (new A);
    else if (r == 1)
        return (new B);
    return (new C);
}

void identify(Base *p) {
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &p) {
    try {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    } catch (std::bad_cast &bc) {
        try {
            B &b = dynamic_cast<B &>(p);
            (void)b;
            std::cout << "B" << std::endl;
        } catch (std::bad_cast &bc) {
            try {
                C &c = dynamic_cast<C &>(p);
                (void)c;
                std::cout << "C" << std::endl;
            } catch (std::bad_cast &bc) {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}