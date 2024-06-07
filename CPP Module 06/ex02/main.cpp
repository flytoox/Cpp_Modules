/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 02:38:54 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/07 02:42:49 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;
    return (0);
}