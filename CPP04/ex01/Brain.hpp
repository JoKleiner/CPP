/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:14:56 by joklein           #+#    #+#             */
/*   Updated: 2025/05/26 15:00:22 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{
  public:
	Brain();
	Brain(const std::string &ideas);
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	~Brain();

    const std::string& getIdea(const int index) const;
	void setIdea(const int index, const std::string& idea);

  private:
	std::string m_ideas[100];
};

#endif
