/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:57:44 by joklein           #+#    #+#             */
/*   Updated: 2025/08/28 10:27:14 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name), m_weapon(nullptr){}

HumanB::HumanB(Weapon &weapon) : m_weapon(&weapon){}

void HumanB::setWeapon(Weapon &weapon){
	m_weapon = &weapon;
}

void HumanB::attack()
{
	if(m_weapon == nullptr)
	{
		std::cout << m_name << " has no weapon" << std::endl;
		return ;
	}
	std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
}
