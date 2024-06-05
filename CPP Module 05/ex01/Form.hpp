/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:08:23 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/05 16:51:35 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        std::string const   _name;
        bool                _signed;
        int const           _gradeToSign;
        int const           _gradeToExecute;
    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(Form const &src);
        ~Form();
        Form &operator=(Form const &obj);
        std::string const   &getName() const;
        bool                getSigned() const;
        int                 getGradeToSign() const;
        int                 getGradeToExecute() const;
        void                beSigned(Bureaucrat &b);
        class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os, Form const &f);