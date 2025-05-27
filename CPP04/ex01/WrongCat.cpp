/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:46:24 by joklein           #+#    #+#             */
/*   Updated: 2025/05/26 10:50:21 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type){
	std::cout << "WrongCat set type constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other){
	std::cout << "WrongCat copy-constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
	std::cout << "WrongCat copy-assignment-operator called" << std::endl;
	if (this != &other)
		m_type = other.m_type;
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "WrongCat sound" << std::endl;
}
