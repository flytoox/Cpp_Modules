/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:08:23 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/05 17:09:48 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;
class AForm
{
    private:
        std::string const   _name;
        bool                _signed;
        int const           _gradeToSign;
        int const           _gradeToExecute;
    public:
        AForm();
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        AForm(AForm const &src);
        virtual ~AForm();
        AForm &operator=(AForm const &obj);
        std::string const   &getName() const;
        int                 getGradeToSign() const;
        int                 getGradeToExecute() const;
        bool                getSigned() const;
        void                beSigned(Bureaucrat &b);
        class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw();
        };
        class FormNotSignedException : public std::exception
        {
            virtual const char *what() const throw();
        };
        virtual void execute(Bureaucrat const &executor) const = 0;
};
