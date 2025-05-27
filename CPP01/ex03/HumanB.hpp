/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:57:41 by joklein           #+#    #+#             */
/*   Updated: 2025/04/15 12:51:44 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
  public:
	HumanB();
	~HumanB();
	HumanB(std::string name);
	HumanB(Weapon &weapon);
	void setWeapon(Weapon &weapon);
	void attack();

  private:
	std::string m_name;
	Weapon *m_weapon;
};

#endif
