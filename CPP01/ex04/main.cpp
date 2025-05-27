/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:36:38 by joklein           #+#    #+#             */
/*   Updated: 2025/04/15 10:10:17 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string repalce_input(std::string line, int i, char **argv)
{
	std::string line_new = line.substr(0, i);
	line_new += argv[3];
	line_new += line.substr(i + std::string(argv[2]).length());
	return (line_new);
}

int	main(int argc, char **argv)
{
	unsigned long	i;

	std::string line;
	if (argc != 4)
		return (std::cout << "wrong number of arguments" << std::endl, 1);
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
		return (std::cout << "wrong input" << std::endl, 1);
	std::ifstream file(argv[1]);
	if (!file)
	{
		std::cout << "wrong file" << std::endl;
		return (1);
	}
	std::ofstream out_file(std::string(argv[1]) + ".replace");
	if (!out_file)
	{
		std::cerr << "could not open file" << std::endl;
		return (1);
	}
	while (std::getline(file, line))
	{
		i = 0;
		while ((i = line.find(argv[2], i)) != std::string::npos)
		{
			line = repalce_input(line, i, argv);
			i += std::string(argv[3]).length();
		}
		out_file << line << std::endl;
	}
	file.close();
	out_file.close();
}
