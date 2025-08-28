/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:56:00 by joklein           #+#    #+#             */
/*   Updated: 2025/08/28 10:29:58 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_fPValue(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	m_fPValue = value << m_fracBit;
}

Fixed::Fixed(const float value){
	std::cout << "Float constructor called" << std::endl;
	m_fPValue = (int)(roundf(value * (1 << m_fracBit)));
}

Fixed::Fixed(const Fixed &other) : m_fPValue(other.m_fPValue){
	std::cout << "Copy constructor called" << std::endl;
	// m_fPValue = other.m_fPValue;
}

Fixed &Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->m_fPValue = other.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	return (this->m_fPValue);
}

void Fixed::setRawBits(int const raw){
	this->m_fPValue = raw;
}

int Fixed::toInt() const{
	return (m_fPValue >> m_fracBit);
}

float Fixed::toFloat() const{
	return ((float)(m_fPValue) / (1 << m_fracBit));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
	out << fixed.toFloat();
	return (out);
}
