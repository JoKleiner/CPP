/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:57:38 by joklein           #+#    #+#             */
/*   Updated: 2025/04/10 16:37:32 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
  public:
	~Weapon();
	Weapon(std::string type);
	void setType(std::string type);
	std::string getType(void);

  private:
	std::string m_type;
};

#endif
