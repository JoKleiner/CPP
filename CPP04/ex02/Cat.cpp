/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:46:18 by joklein           #+#    #+#             */
/*   Updated: 2025/05/27 11:39:48 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), m_brain(new Brain()){
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type), m_brain(new Brain()){
	std::cout << "Cat set type constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), m_brain(new Brain(*other.m_brain)){
	std::cout << "Cat copy-constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat copy-assignment-operator called" << std::endl;
	if (this != &other)
	{
		m_type = other.m_type;
		m_brain = new Brain(*other.m_brain);
	}
	return (*this);
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
	delete m_brain;
}

void Cat::makeSound() const{
	std::cout << "Cat sound" << std::endl;
}

Brain *Cat::getBrain() const{
	return (m_brain);
}
