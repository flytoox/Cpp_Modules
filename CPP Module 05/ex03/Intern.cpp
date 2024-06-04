/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:50:50 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/04 23:19:06 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(Intern const &src) {
    *this = src;
}

Intern::~Intern() {
}

Intern &Intern::operator=(Intern const &obj) {
    (void)obj;
    return *this;
}

AForm *Intern::makeForm(std::string form, std::string target) {
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm *(*form_funcs[3])(std::string) = {&Intern::createShrubberyCreationForm, &Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm};
    
    for (int i = 0; i < 3; i++) {
        if (form == forms[i]) {
            AForm *f = form_funcs[i](target);
            return f;
        }
    }
    throw FormNotFoundException();
    
    return NULL;
}   

const char *Intern::FormNotFoundException::what() const throw() {
    return "Form not found";
}

AForm *Intern::createShrubberyCreationForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomyRequestForm(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidentialPardonForm(std::string target) {
    return new PresidentialPardonForm(target);
}

