/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:38:29 by joklein           #+#    #+#             */
/*   Updated: 2025/09/04 10:35:40 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): m_name("unnamed"), m_hit_points(10), m_energy_points(10), m_attack_dmg(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): m_name(name), m_hit_points(10), m_energy_points(10), m_attack_dmg(0) {
	std::cout << "Setname constructor called" << std::endl;
	std::cout << "ClapTrap " << m_name << " | hit-points: " << m_hit_points << ", energy-points: " << m_energy_points << ", attack_dmg: " << m_attack_dmg << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other):
	m_name(other.m_name),
	m_hit_points(other.m_hit_points),
	m_energy_points(other.m_energy_points),
	m_attack_dmg(other.m_attack_dmg)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		m_name = other.m_name;
		m_hit_points = other.m_hit_points;
		m_energy_points = other.m_energy_points;
		m_attack_dmg = other.m_attack_dmg;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (m_hit_points <= 0)
		return (std::cout << "ClapTrap " << m_name << " is out of hit-points" << std::endl, void());
		
	if (m_energy_points <= 0)
		return (std::cout << "ClapTrap " << m_name << " is out of energy-points" << std::endl, void());

	std::cout << "ClapTrap " << m_name << " attacks " << target << ", causing " << m_attack_dmg << " points of damage!" << std::endl;
	m_energy_points--;
	std::cout << "ClapTrap " << m_name << " | hit-points: " << m_hit_points << ", energy-points: " << m_energy_points << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << m_name << " takes " << amount << " points of damage!" << std::endl;
	m_hit_points -= amount;
	std::cout << "ClapTrap " << m_name << " | hit-points: " << m_hit_points << ", energy-points: " << m_energy_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_hit_points <= 0)
		return (std::cout << "ClapTrap " << m_name << " is out of hit-points" << std::endl, void());
	
	if (m_energy_points <= 0)
		std::cout << "ClapTrap " << m_name << " is out of energy-points" << std::endl, void());

	std::cout << "ClapTrap " << m_name << " repaires " << amount << " Hit-points!" << std::endl;
	m_hit_points += amount;
	m_energy_points--;
	std::cout << "ClapTrap " << m_name << " | hit-points: " << m_hit_points << ", energy-points: " << m_energy_points << std::endl;
}
