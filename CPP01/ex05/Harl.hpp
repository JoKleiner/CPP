/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:39:44 by joklein           #+#    #+#             */
/*   Updated: 2025/09/04 11:33:14 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
  public:
	Harl() = default;
	~Harl() = default;
	
	void complain(std::string level);

  private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void wait(void);
};

#endif
