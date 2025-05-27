/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:53:40 by joklein           #+#    #+#             */
/*   Updated: 2025/04/14 10:55:15 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
  private:
	Contact contacts[8];
	int contact_in_book;
	int contact_index;

  public:
	PhoneBook();
	int add_contact();
	int search_handle();
};

#endif
