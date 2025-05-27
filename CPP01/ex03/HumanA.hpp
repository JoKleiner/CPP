/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:57:46 by joklein           #+#    #+#             */
/*   Updated: 2025/04/15 12:50:39 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
  public:
	~HumanA();
	HumanA(std::string name, Weapon &weapon);
    void attack();

  private:
	std::string m_name;
	Weapon &m_weapon;
};

#endif
