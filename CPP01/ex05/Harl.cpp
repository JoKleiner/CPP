/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:39:46 by joklein           #+#    #+#             */
/*   Updated: 2025/09/04 09:57:35 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

constexpr unsigned int ct_hash(const char* str)
{
    unsigned int hash = 5381;
    for (size_t i = 0; str[i] != '\0'; i++)
        hash = hash * 33 ^ static_cast<unsigned char>(str[i]);
    return(hash);
}

void Harl::complain(std::string level)
{
	switch(ct_hash(level.c_str())) {
		case ct_hash("DEBUG"):		debug();	break;
		case ct_hash("INFO"):		info();		break;
		case ct_hash("WARNING"):	warning();	break;
		case ct_hash("ERROR"):		error();	break;
		default:
		std::cout << "Harl is waiting for more complainig." << std::endl; break;
	}
}

void Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
