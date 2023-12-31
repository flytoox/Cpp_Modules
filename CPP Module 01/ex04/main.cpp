/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:46:49 by obelaizi          #+#    #+#             */
/*   Updated: 2023/10/27 15:34:04 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

#define string std::string
#define cout std::cout
#define endl std::endl


int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		cout << "Wrong number of arguments" << endl;
		return (1);
	}
	string filename = argv[1], s1 = argv[2], s2 = argv[3];
	std::ifstream file(filename);
	if (!file.is_open())
	{
		cout << "Error opening file" << endl;
		return (1);
	}
	string line;
	string content;
	while (std::getline(file, line))
	{
		content += line;
		content += "\n";
	}
	file.close();
	std::ofstream	out(filename + ".replace");
	int indx = 0;
	while ((indx = content.find(s1, indx)) != -1)
	{
		content.erase(indx, s1.length());
		content.insert(indx, s2);
		indx += s2.length();
	}
	if (!out.is_open())
	{
		cout<<"Mamamia There is an error" << endl;
		return (1);	
	}
	content.pop_back();
	out << content;
	out.close();
	
}