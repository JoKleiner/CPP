/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:50:55 by joklein           #+#    #+#             */
/*   Updated: 2025/04/10 14:59:09 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
  public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void announce(void);

  private:
	std::string m_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
