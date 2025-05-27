/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:51:39 by joklein           #+#    #+#             */
/*   Updated: 2025/05/26 14:56:34 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
  public:
	Dog();
	Dog(const std::string &type);
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog() override;

	void makeSound() const override;
	Brain *getBrain() const;

  private:
	Brain *m_brain;
};

#endif
