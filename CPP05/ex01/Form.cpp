/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:09:56 by joklein           #+#    #+#             */
/*   Updated: 2025/09/04 10:52:47 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int signGrade, int execGrade) : m_name(name), m_signGrade(signGrade), m_execGrade(execGrade), m_signed(false){
	if (signGrade < 1 || execGrade < 1)
	{
		std::cout << "Form " << m_name << " not created: ";
		throw GradeTooHighException();
	}
	else if (signGrade > 150 || execGrade > 150)
	{
		std::cout << "Form " << m_name << " not created: ";
		throw GradeTooLowException();
	}
	else
	{
		std::cout << "Form " << m_name << " created with sign grade " << signGrade << " and exec grade " << execGrade << "." << std::endl;
	}
}

Form::Form(const Form &other) : m_name(other.m_name),
	m_signGrade(other.m_signGrade), m_execGrade(other.m_execGrade),
	m_signed(other.m_signed){
}

Form &Form::operator=(const Form &other){
	if (this != &other)
		m_signed = other.m_signed;
	return (*this);
}

std::string Form::getName() const{
	return (m_name);
}

int Form::getSignGrade() const{
	return (m_signGrade);
}

int Form::getExecGrade() const{
	return (m_execGrade);
}

bool Form::isSigned() const{
	return (m_signed);
}

void Form::beSigned(){
	m_signed = true;
}

const char* Form::GradeTooHighException::what() const noexcept {
	return ("Grade is too high!");
}

const char* Form::GradeTooLowException::what() const noexcept {
	return ("Grade is too low!");
}

std::ostream &operator<<(std::ostream &out, const Form &other){
	out << other.getName() << ", sign grade " << other.getSignGrade() << ", exec grade "
    << other.getExecGrade() << ", is signed " << other.isSigned() << ".";
	return (out);
}
