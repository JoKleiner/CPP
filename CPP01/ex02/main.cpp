/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:32:33 by joklein           #+#    #+#             */
/*   Updated: 2025/04/10 15:30:37 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

    std::cout << "\nAddresses: \n";
	std::cout << "Address of the string variable: "   << &string      << "\n";
	std::cout << "Address held by stringPTR: "        << stringPTR    << "\n";
	std::cout << "Address held by stringREF: "        << &stringREF   << "\n";

    std::cout << "\nValues: \n";
    std::cout << "Value of the string variable: "     << string       << "\n";
	std::cout << "Value pointed to by stringPTR: "    << *stringPTR   << "\n";
	std::cout << "Value pointed to by stringREF: "    << stringREF    << "\n";
    
    std::cout << std::endl;
	return (0);
}
