/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 09:45:12 by joklein           #+#    #+#             */
/*   Updated: 2025/05/26 14:34:42 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
  public:
	Cat();
	Cat(const std::string &type);
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat() override;

	void makeSound() const override;
	Brain *getBrain() const;

  private:
	Brain *m_brain;
};

#endif
