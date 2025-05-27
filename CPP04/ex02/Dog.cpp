/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:52:16 by joklein           #+#    #+#             */
/*   Updated: 2025/05/26 14:47:38 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), m_brain(new Brain()){
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type), m_brain(new Brain()){
	std::cout << "Dog set type constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), m_brain(new Brain(*other.m_brain)){
	std::cout << "Dog copy-constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other){
	std::cout << "Dog copy-assignment-operator called" << std::endl;
	if (this != &other)
	{
		m_type = other.m_type;
		m_brain = new Brain(*other.m_brain);
	}
	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Dog sound" << std::endl;
}

Brain *Dog::getBrain() const{
	return (m_brain);
}
