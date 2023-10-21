/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:09:35 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/21 21:08:38 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout<<"ONLY 1 Argument required\n", 1);
	Harl harl;
	harl.complain(argv[1]);
}