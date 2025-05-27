/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:56:00 by joklein           #+#    #+#             */
/*   Updated: 2025/05/20 09:42:33 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_fPValue(0){
	std::cout << "Default constructor called" << std::endl;
}

// Fixed::Fixed() {
//     m_fPValue = 0;
//     std::cout << "Default constructor called" << std::endl;
// }

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called" << std::endl;
	m_fPValue = other.getRawBits();
	// Fixed temp;
	// temp = other;
	// m_fPValue = temp.m_fPValue;
}

Fixed &Fixed::operator=(const Fixed &other)
{
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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->m_fPValue);
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->m_fPValue = raw;
}
