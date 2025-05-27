/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:15:41 by joklein           #+#    #+#             */
/*   Updated: 2025/05/26 15:00:43 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		m_ideas[i] = "Empty thought";
}

Brain::Brain(const std::string& ideas){
    std::cout << "Brain set ideas constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
		m_ideas[i] = ideas;
}

Brain::Brain(const Brain &other){
	std::cout << "Brain copy-constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		m_ideas[i] = other.m_ideas[i];
}

Brain &Brain::operator=(const Brain &other){
	std::cout << "Brain copy-assignment-operator called" << std::endl;
	if (this != &other)
		for (int i = 0; i < 100; i++)
			m_ideas[i] = other.m_ideas[i];
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

const std::string &Brain::getIdea(const int index) const{
	return (m_ideas[index]);
}

void Brain::setIdea(const int index, const std::string &idea){
	m_ideas[index] = idea;
}
