/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:46:18 by joklein           #+#    #+#             */
/*   Updated: 2025/05/26 10:36:10 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type){
	std::cout << "Cat set type constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other){
	std::cout << "Cat copy-constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat copy-assignment-operator called" << std::endl;
	if (this != &other)
		m_type = other.m_type;
	return (*this);
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Cat sound" << std::endl;
}
