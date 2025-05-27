/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:57:48 by joklein           #+#    #+#             */
/*   Updated: 2025/04/15 12:50:43 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(){}

HumanA::HumanA(std::string name, Weapon &weapon) : m_name(name), m_weapon(weapon){}

void HumanA::attack(){
	std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}
