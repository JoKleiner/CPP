/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:50:31 by joklein           #+#    #+#             */
/*   Updated: 2025/04/08 15:33:43 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	randomChump("Stack_Zombie");
	zombie = newZombie("Heap_Zombie");
	zombie->announce();
	delete (zombie);
	return (0);
}
