/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:26:41 by joklein           #+#    #+#             */
/*   Updated: 2025/04/08 13:19:12 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;

	std::string input;
	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, input))
			return (std::cout << "getline went wrong" << std::endl, 1);
		if (input == "EXIT")
			return (std::cout << "Exit" << std::endl, 0);
		else if (input == "ADD")
		{
			if (phonebook.add_contact())
				return (1);
		}
		else if (input == "SEARCH")
		{
			std::cout << "\033[2J\033[1;1H";
			if (phonebook.search_handle())
				return (1);
		}
		else
			std::cout << "Invalid command." << std::endl;
	}
	return (0);
}
