/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:09:24 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/05 16:52:36 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _gradeToSign(150), _gradeToExecute(150){
    this->_signed = false;
}

Form::Form(std::string name, int sign_grade, int exec_grade) : _name(name),  _gradeToSign(sign_grade), _gradeToExecute(exec_grade){
    this->_signed = false;
}

Form::Form(Form const &src): _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute){
    *this = src;
}

Form::~Form() {
}

Form &Form::operator=(Form const &obj) {
    if (this != &obj)
    {
        this->_signed = obj._signed;
    }
    return *this;
}

std::string const   &Form::getName() const {
    return this->_name;
}

bool                Form::getSigned() const {
    return this->_signed;
}

int                 Form::getGradeToSign() const {
    return this->_gradeToSign;
}

int                 Form::getGradeToExecute() const {
    return this->_gradeToExecute;
}

void                Form::beSigned(Bureaucrat &b) {
    if (b.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    this->_signed = true;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &os, Form const &f) {
    os << "Form " << f.getName() << " is " << (f.getSigned() ? "" : "not ") << "signed\n";
    return os;
}