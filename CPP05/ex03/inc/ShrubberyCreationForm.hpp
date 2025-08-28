/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:09:38 by joklein           #+#    #+#             */
/*   Updated: 2025/08/28 11:13:17 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm  : public AForm
{
  public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm() override;

	void execute(const Bureaucrat &executor) const override;
	
};
