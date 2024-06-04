#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
class Bureaucrat;
class ShrubberyCreationForm : public AForm
{
    private:
        std::string   _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);
        void execute(Bureaucrat const &executor) const;
        class FileNotOpenedException : public std::exception
        {
            virtual const char *what() const throw();
        };
};