#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
    private:
        std::string   _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);
        void execute(Bureaucrat const &executor) const;
        class FileNotOpenedException : public std::exception
        {
            virtual const char *what() const throw();
        };
};