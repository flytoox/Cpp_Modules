#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string const   _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &src);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
        void execute(Bureaucrat const &executor) const;
        class FileNotOpenedException : public std::exception
        {
            virtual const char *what() const throw();
        };
};