/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:42:56 by joklein           #+#    #+#             */
/*   Updated: 2025/04/18 13:02:26 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int Contact::get_contact_input(const std::string &label, std::string &name)
{
	std::string input;
	while (true)
	{
		std::cout << "Enter " << label << ": ";
		if (!std::getline(std::cin, input))
			return (std::cout << "getline went wrong", 1);
		if (input.empty())
		{
			std::cout << "Need input" << std::endl;
			continue ;
		}
		if (label == "phone number")
		{
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
		}
		break ;
	}
	name = input;
	return (0);
}

int Contact::set_contact()
{
	if (get_contact_input("first name", first_name) == 1)
		return (1);
	if (get_contact_input("last name", last_name) == 1)
		return (1);
	if (get_contact_input("nick name", nick_name) == 1)
		return (1);
	if (get_contact_input("phone number", phone_number) == 1)
		return (1);
	if (get_contact_input("darkest secret", darkest_secret) == 1)
		return (1);
	return (0);
}

std::string Contact::print_phonebook(std::string name)
{
	std::string name_prep;
	name_prep = name;
	if (name_prep.length() > 10)
		name_prep = name_prep.substr(0, 9) + '.';
	else
		name_prep = std::string(10 - name_prep.length(), ' ') + name_prep;
	return (name_prep);
}

void Contact::search_contact(int index)
{
	std::cout << "         " << index << "|";
	std::cout << print_phonebook(first_name) << "|";
	std::cout << print_phonebook(last_name) << "|";
	std::cout << print_phonebook(nick_name);
	std::cout << std::endl;
}

void Contact::print_contact(int index)
{
	std::cout << "index          = " << index << "\n";
	std::cout << "first name     = " << first_name << "\n";
	std::cout << "last name      = " << last_name << "\n";
	std::cout << "nick name      = " << nick_name << "\n";
	std::cout << "phone number   = " << phone_number << "\n";
	std::cout << "darkest secret = " << darkest_secret << "\n" << std::endl;
}
