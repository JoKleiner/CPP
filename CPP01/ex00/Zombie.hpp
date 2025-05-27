/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:50:55 by joklein           #+#    #+#             */
/*   Updated: 2025/04/10 13:19:05 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

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

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
