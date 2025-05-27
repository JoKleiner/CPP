/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:26:18 by joklein           #+#    #+#             */
/*   Updated: 2025/04/14 11:08:22 by joklein          ###   ########.fr       */
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
	std::string index;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
	std::string print_phonebook(std::string name);
	int get_contact_input(const std::string &label, std::string &name);
};

#endif
