/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:50:53 by joklein           #+#    #+#             */
/*   Updated: 2025/04/15 09:47:13 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string name) : m_name(name){}

Zombie::~Zombie(){
	std::cout << "Zombie " << m_name << " destroyed" << std::endl;
}

void Zombie::announce(void){
	std::cout << m_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
