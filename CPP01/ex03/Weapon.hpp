/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:57:38 by joklein           #+#    #+#             */
/*   Updated: 2025/08/28 10:27:21 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
  public:
  	Weapon(std::string type);
	~Weapon() = default;
	
	void setType(std::string type);
	std::string getType(void);

  private:
	std::string m_type;
};

#endif
