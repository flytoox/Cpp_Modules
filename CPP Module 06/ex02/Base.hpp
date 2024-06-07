/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 02:34:05 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/07 02:46:13 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Base {
    public:
        virtual ~Base();
        
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);