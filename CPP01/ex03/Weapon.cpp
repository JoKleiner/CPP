/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:57:36 by joklein           #+#    #+#             */
/*   Updated: 2025/04/15 09:49:34 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon(){}

Weapon::Weapon(std::string type) : m_type(type){}

void Weapon::setType(std::string type){
	m_type = type;
}

std::string Weapon::getType(void)
{
	std::string type;
	type = m_type;
	return (type);
}
