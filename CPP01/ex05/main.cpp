/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:39:41 by joklein           #+#    #+#             */
/*   Updated: 2025/04/14 17:26:19 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl level;
    level.complain("DEBUG");
    level.complain("INFO");
    level.complain("WARNING");
    level.complain("ERROR");
    level.complain("");
}
