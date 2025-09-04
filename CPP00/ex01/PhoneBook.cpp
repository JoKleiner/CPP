/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:53:43 by joklein           #+#    #+#             */
/*   Updated: 2025/09/04 09:46:55 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : m_contact_in_book(0), m_contact_index(0){
}

int PhoneBook::add_contact()
{
	if (m_contacts[m_contact_index].set_contact() == 1)
		return (1);
	m_contact_index++;
	if (m_contact_index == 8)
		m_contact_index = 0;
	if (m_contact_in_book < 8)
		m_contact_in_book++;
	return (0);
}

int PhoneBook::search_handle()
{
	int	index;

	std::string input;
	std::cout << "     index| firstname|  lastname|  nickname" << std::endl;
	for (int index = 0; index < m_contact_in_book; index++)
		m_contacts[index].search_contact(index);
	std::cout << std::endl;
	while (true)
	{
		std::cout << "Enter the index of a contact: ";
		if (!std::getline(std::cin, input))
			return (std::cout << "getline went wrong", 1);
		if (input.empty())
		{
			std::cout << "Need input" << std::endl;
			continue ;
		}
		bool	is_digit_only = true;
		for (int i = 0; input[i]; i++)
		{
			if (!isdigit(input[i]))
			{
				is_digit_only = false;
				break ;
			}
		}
		if (!is_digit_only)
		{
			std::cout << "Only numbers!" << std::endl;
			continue ;
		}
		index = std::stoi(input);
		if (index < 0 || index > m_contact_in_book - 1)
		{
			std::cout << "Wrong index" << std::endl;
			break ;
		}
		m_contacts[index].print_contact(index);
		break ;
	}
	return (0);
}
