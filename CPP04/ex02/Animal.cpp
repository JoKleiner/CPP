/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:34:18 by joklein           #+#    #+#             */
/*   Updated: 2025/05/26 15:49:09 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : m_type("untyped"){
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const std::string& type) : m_type(type){
	std::cout << "Animal set type constructor called for: " << type << std::endl;
}

Animal::Animal(const Animal &other) : m_type(other.m_type){
	std::cout << "Animal copy-constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other){
	std::cout << "Animal copy-assignment-operator called" << std::endl;
    if(this != &other)
        m_type = other.m_type;
    return(*this);
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const{
    return(m_type);
}
