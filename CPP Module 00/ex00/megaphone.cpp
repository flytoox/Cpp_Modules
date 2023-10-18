/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:54:17 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/17 17:33:31 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

#define cout std::cout
#define endl std::endl
#define cin std::cin

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
		for (int j = 0; argv[i][j]; j++)
			cout<<(char)toupper(argv[i][j]);
}
