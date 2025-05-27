/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:39:44 by joklein           #+#    #+#             */
/*   Updated: 2025/04/14 17:46:35 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
  public:
	Harl();
	~Harl();
	void complain(std::string level);

  private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
