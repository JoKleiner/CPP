/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:44:07 by joklein           #+#    #+#             */
/*   Updated: 2025/05/26 13:00:40 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : m_type("untyped"){
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : m_type(type){
	std::cout << "WrongAnimal set type constructor called for: " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : m_type(other.m_type){
	std::cout << "WrongAnimal copy-constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	std::cout << "WrongAnimal copy-assignment-operator called" << std::endl;
    if(this != &other)
        m_type = other.m_type;
    return(*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const{
    return(m_type);
}
