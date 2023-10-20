/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:44:09 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/20 22:48:50 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;

	std::cout << &s << std::endl << &stringPTR << std::endl << &stringREF << std::endl << std::endl;

	std::cout << s << std::endl << *stringPTR << std::endl << stringREF << std:: endl;
}