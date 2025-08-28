/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:35:37 by joklein           #+#    #+#             */
/*   Updated: 2025/08/28 12:55:09 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

double RPN::m_result = 0;
double RPN::m_value = 0;
std::stack<double> RPN::m_stack;

static bool check_input(std::string arg)
{
	if (!std::regex_match(arg, std::regex("(\\d)( [\\d\\+\\-\\*\\/])*")))
	{
		std::cerr << RED << "Error" << RESET << std::endl;
		return false;
	}
	return true;
}

bool RPN::check_overflow()
{
	if (m_result > std::numeric_limits<int>::max())	{
		std::cerr << RED << "Error: int max overflow" << RESET << std::endl;
		return true;
	}
	if (m_result < std::numeric_limits<int>::min())	{
		std::cerr << RED << "Error: int min overflow" << RESET << std::endl;
		return true;
	}
	return false;
}

bool RPN::calc_result(char cha)
{
	switch (cha)
	{
	case ('-'):
		m_result -= m_value;
		break;
	case ('+'):
		m_result += m_value;
		break;
	case ('*'):
		m_result *= m_value;
		break;
	case ('/'):
		if (m_value == 0)
		{
			std::cerr << RED << "Error: divided by '0'" << RESET << std::endl;
			return false;
		}
		m_result /= m_value;
	}
	return (true);
}

bool RPN::pop_in_value()
{
	if (m_stack.size() < 2)
	{
		std::cerr << RED << "Error" << RESET << std::endl;
		return false;
	}
	m_value = m_stack.top();
	m_stack.pop();
	m_result = m_stack.top();
	m_stack.pop();
	return true;
}

int RPN::rpn_process(std::string arg)
{
	if (!check_input(arg))
		return (1);

	for (size_t i = 0; i < arg.size(); i += 2)
	{
		if (isdigit(arg[i]))
		{
			m_stack.push(arg[i] - '0');
			continue;
		}
		if (!pop_in_value())
			return (1);
		if (!calc_result(arg[i]))
			return (1);
		if (check_overflow())
			return (1);
		m_stack.push(m_result);
	}
	if (m_stack.size() != 1)
	{
		std::cerr << RED << "Error: not enough operators" << RESET << std::endl;
		return (1);
	}

	std::cout << int(m_stack.top()) << std::endl;
	return (0);
}
