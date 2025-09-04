/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:26:18 by joklein           #+#    #+#             */
/*   Updated: 2025/09/04 09:44:02 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
  public:
	void search_contact(int index);
	int set_contact();
	void print_contact(int index);

  private:
	std::string m_index;
	std::string m_first_name;
	std::string m_last_name;
	std::string m_nick_name;
	std::string m_phone_number;
	std::string m_darkest_secret;
	std::string print_phonebook(std::string name);
	int get_contact_input(const std::string &label, std::string &name);
};

#endif
