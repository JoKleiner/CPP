/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:56:07 by joklein           #+#    #+#             */
/*   Updated: 2025/08/28 11:18:21 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Base
{
    public:
        virtual ~Base() = default;
};

class A : public Base {};
class B : public Base {};
class C : public Base {};
