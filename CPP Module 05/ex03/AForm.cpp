/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:09:24 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/04 21:33:15 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _gradeToSign(150), _gradeToExecute(150) {
    this->_signed = false;
}

AForm::AForm(std::string name, int sign_grade, int exec_grade) : _name(name),  _gradeToSign(sign_grade), _gradeToExecute(exec_grade) {
    this->_signed = false;
}

AForm::AForm(AForm const &src): _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {
    *this = src;
}

AForm::~AForm() {
}

AForm &AForm::operator=(AForm const &obj) {
    if (this != &obj)
        this->_signed = obj._signed;
    return *this;
}

std::string const   &AForm::getName() const {
    return this->_name;
}

bool                AForm::getSigned() const {
    return this->_signed;
}

int                 AForm::getGradeToSign() const {
    return this->_gradeToSign;
}

int                 AForm::getGradeToExecute() const {
    return this->_gradeToExecute;
}

void                AForm::beSigned(Bureaucrat &b) {
    if (b.getGrade() > this->_gradeToSign)
        throw AForm::GradeTooLowException();
    this->_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

const char *AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed";
}

std::ostream &operator<<(std::ostream &os, AForm const &f) {
    os << "Form " << f.getName() << " is " << (f.getSigned() ? "" : "not ") << "signed\n";
    return os;
}