/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:50:59 by obelaizi          #+#    #+#             */
/*   Updated: 2023/11/18 16:03:57 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain {
	private:
		std::string _ideas[100];
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain &br);
		Brain &operator=(const Brain &br);
};
#endif