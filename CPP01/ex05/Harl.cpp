/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:39:46 by joklein           #+#    #+#             */
/*   Updated: 2025/04/15 10:41:48 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::complain(std::string level)
{
	std::string mssg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*mssg_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning,&Harl::error};
	for (unsigned long i = 0; i < std::size(mssg); i++)
	{
		if (level == mssg[i])
		{
			(this->*mssg_ptr[i])();
			return ;
		}
	}
    std::cout << "Harl is waiting for more complainig." << std::endl;
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
