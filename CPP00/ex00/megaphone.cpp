/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 10:47:09 by joklein           #+#    #+#             */
/*   Updated: 2025/04/18 12:43:57 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; i++)
    {
        for (int u = 0; argv[i][u]; u++)
            std::cout << static_cast<char>(toupper(argv[i][u]));
        if (i + 1 < argc)
            std::cout << " ";
    }
    std::cout << std::endl;
    return(0);
}
