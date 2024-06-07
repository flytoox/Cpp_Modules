/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 02:14:43 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/07 02:54:48 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdint> 


struct Data
{
    std::string key;
    std::string value;
    int        index;
};
class Serializer
{
    private:
        Serializer();
        ~Serializer();
        Serializer(Serializer const &src);
        Serializer &operator=(Serializer const &rhs);
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};