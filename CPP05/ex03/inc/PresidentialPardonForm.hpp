/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:09:38 by joklein           #+#    #+#             */
/*   Updated: 2025/08/28 11:13:24 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;

class PresidentialPardonForm  : public AForm
{
  public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
	~PresidentialPardonForm() override;

	void execute(const Bureaucrat &executor) const override;

};
