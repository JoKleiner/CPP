/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:22:14 by joklein           #+#    #+#             */
/*   Updated: 2025/04/10 14:19:29 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
    Zombie*	horde = new Zombie[N];
    
	for (int i = 0; i < N; i++) {
		new (&horde[i]) Zombie(name);
	}
	return (horde);
}
