/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelaizi <obelaizi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:03:13 by obelaizi          #+#    #+#             */
/*   Updated: 2024/06/05 17:04:34 by obelaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
    *this = src;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj) {
    if (this != &obj)
    {
        this->_grade = obj._grade;
    }
    return *this;
}

std::string const   &Bureaucrat::getName() const {
    return this->_name;
}

int                 Bureaucrat::getGrade() const {
    return this->_grade;
}

void                Bureaucrat::incrementGrade() {
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void                Bureaucrat::decrementGrade() {
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

void                Bureaucrat::signForm(Form &f) {
    try {
        f.beSigned(*this);
        std::cout << this->_name << " signed " << f.getName() << std::endl;
    }
    catch(const std::exception &e) {
        std::cerr << this->_name << " couldn’t sign " << f.getName() << " because " << e.what() << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &obj) {
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << '.';
    return out;
}