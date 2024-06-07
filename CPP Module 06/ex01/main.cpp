/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 20:33:51 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/07 02:56:34 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data data;
    data.key = "tlaja";
    data.value = "homemax";
    data.index = 42;

    uintptr_t raw = Serializer::serialize(&data);
    Data *ptr = Serializer::deserialize(raw);

    std::cout << "key: " << ptr->key << std::endl;
    std::cout << "value: " << ptr->value << std::endl;
    std::cout << "index: " << ptr->index << std::endl;

    return 0;
}