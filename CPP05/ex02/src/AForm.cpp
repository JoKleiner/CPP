/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:09:56 by joklein           #+#    #+#             */
/*   Updated: 2025/09/04 10:57:35 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

AForm::AForm(std::string name, int signGrade, int execGrade, std::string target) : m_name(name), m_signGrade(signGrade), m_execGrade(execGrade), m_signed(false), m_target(target){
	if (signGrade < 1 || execGrade < 1)
	{
		std::cout << "AForm " << m_name << " not created: ";
		throw GradeTooHighException();
	}
	else if (signGrade > 150 || execGrade > 150)
	{
		std::cout << "AForm " << m_name << " not created: ";
		throw GradeTooLowException();
	}
	else
	{
		std::cout << "AForm " << m_name << " created with sign grade " << signGrade << " and exec grade " << execGrade << "." << std::endl;
	}
}

AForm::AForm(const AForm &other) : m_name(other.m_name),
	m_signGrade(other.m_signGrade), m_execGrade(other.m_execGrade),
	m_signed(other.m_signed){
}

AForm &AForm::operator=(const AForm &other){
	if (this != &other)
		m_signed = other.m_signed;
	return (*this);
}

AForm::~AForm(){
	std::cout << "AForm " << m_name << " destroyed." << std::endl;
}

std::string AForm::getName() const{
	return (m_name);
}

int AForm::getSignGrade() const{
	return (m_signGrade);
}

int AForm::getExecGrade() const{
	return (m_execGrade);
}

bool AForm::isSigned() const{
	return (m_signed);
}

void AForm::beSigned(){
	m_signed = true;
}

std::string AForm::getTarget() const{
	return (m_target);
}

const char* AForm::GradeTooHighException::what() const noexcept {
	return ("Grade is too high!");
}

const char* AForm::GradeTooLowException::what() const noexcept {
	return ("Grade is too low!");
}

std::ostream &operator<<(std::ostream &out, const AForm &other){
	out << other.getName() << ", sign grade " << other.getSignGrade() << ", exec grade "
    << other.getExecGrade() << ", is signed " << other.isSigned() << ".";
	return (out);
}
