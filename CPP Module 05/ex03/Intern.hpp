#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
class Bureaucrat;

class Intern
{
    public:
        Intern();
        Intern(Intern const &src);
        ~Intern();
        Intern &operator=(Intern const &obj);
        AForm *makeForm(std::string formName, std::string target);
        class FormNotFoundException : public std::exception
        {
            virtual const char *what() const throw();
        };

        static AForm *createShrubberyCreationForm(std::string target);
        static AForm *createRobotomyRequestForm(std::string target);
        static AForm *createPresidentialPardonForm(std::string target);
};
