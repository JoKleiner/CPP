/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:57:41 by joklein           #+#    #+#             */
/*   Updated: 2025/09/04 09:48:55 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
  public:
	HumanB(std::string name);
	HumanB(Weapon &weapon);
	~HumanB() = default;
	
	void setWeapon(Weapon &weapon);
	void attack();

  private:
	std::string m_name;
	Weapon *m_weapon;
};

#endif
