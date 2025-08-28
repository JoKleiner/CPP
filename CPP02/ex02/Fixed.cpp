/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:56:00 by joklein           #+#    #+#             */
/*   Updated: 2025/08/28 10:36:48 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_fPValue(0){
}

Fixed::Fixed(const int value){
	m_fPValue = value << m_fracBit;
}

Fixed::Fixed(const float value){
	m_fPValue = static_cast<int>(roundf(value * (1 << m_fracBit)));
}

Fixed::Fixed(const Fixed &other) : m_fPValue(other.m_fPValue){
}

Fixed &Fixed::operator=(const Fixed &other){
	if (this != &other)
		this->m_fPValue = other.getRawBits();
	return (*this);
}

Fixed::~Fixed(){}

int Fixed::getRawBits(void) const{
	return (this->m_fPValue);
}

void Fixed::setRawBits(int const raw){
	this->m_fPValue = raw;
}

float Fixed::toFloat() const{
	return (static_cast<float>(m_fPValue) / (1 << m_fracBit));
}

int Fixed::toInt() const{
	return (m_fPValue >> m_fracBit);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed){
	out << fixed.toFloat();
	return (out);
}

// Comparison Operators
bool Fixed::operator>(const Fixed &other) const{
	return (this->m_fPValue > other.m_fPValue);}

bool Fixed::operator<(const Fixed &other) const{
	return (this->m_fPValue < other.m_fPValue);}

bool Fixed::operator>=(const Fixed &other) const{
	return (this->m_fPValue >= other.m_fPValue);}

bool Fixed::operator<=(const Fixed &other) const{
	return (this->m_fPValue <= other.m_fPValue);}

bool Fixed::operator==(const Fixed &other) const{
	return (this->m_fPValue == other.m_fPValue);}

bool Fixed::operator!=(const Fixed &other) const{
	return (this->m_fPValue != other.m_fPValue);}

// Arithmetic Operators
Fixed Fixed::operator+(const Fixed &other) const{
	return (Fixed(this->toFloat() + other.toFloat()));}

Fixed Fixed::operator-(const Fixed &other) const{
	return (Fixed(this->toFloat() - other.toFloat()));}

Fixed Fixed::operator*(const Fixed &other) const{
	return (Fixed(this->toFloat() * other.toFloat()));}

Fixed Fixed::operator/(const Fixed &other) const{
	return (Fixed(this->toFloat() / other.toFloat()));}

// In-/Decrement Operators
Fixed &Fixed::operator++(){
	this->m_fPValue++;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed	temp;
	temp = *this;
	this->m_fPValue++;
	return (temp);
}

Fixed &Fixed::operator--(){
	this->m_fPValue--;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed	temp;
	temp = *this;
	this->m_fPValue--;
	return temp;
}

// Min/Max
Fixed &Fixed::min(Fixed &a, Fixed &b){
	if(a > b)
		return(b);
	return(a);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b){
	if(a > b)
		return(b);
	return(a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
	if(a < b)
		return(b);
	return(a);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b){
	if(a < b)
		return(b);
	return(a);
}
