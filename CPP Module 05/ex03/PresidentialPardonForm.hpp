#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
class PresidentialPardonForm : public AForm
{
    private:
        std::string   _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &src);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);
        void execute(Bureaucrat const &executor) const;
        class FileNotOpenedException : public std::exception
        {
            virtual const char *what() const throw();
        };
};