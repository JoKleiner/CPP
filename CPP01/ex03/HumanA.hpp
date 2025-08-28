/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:57:46 by joklein           #+#    #+#             */
/*   Updated: 2025/08/28 10:26:47 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
  public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA() = default;
	
    void attack();

  private:
	std::string m_name;
	Weapon &m_weapon;
};

#endif
