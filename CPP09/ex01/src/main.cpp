/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:35:34 by joklein           #+#    #+#             */
/*   Updated: 2025/08/28 12:47:06 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
		return(std::cerr << RED << "Error: number of arguments incorrect" << RESET << std::endl, 1);
	return(RPN::rpn_process(argv[1]));
}
