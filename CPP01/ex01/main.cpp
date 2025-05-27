/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:50:31 by joklein           #+#    #+#             */
/*   Updated: 2025/04/10 14:21:40 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"

int	main(void)
{
	int		N;
	Zombie	*horde;

	N = 4;
	horde = zombieHorde(N, "Bryan");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] (horde);
	return (0);
}
