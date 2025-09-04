/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 11:59:24 by joklein           #+#    #+#             */
/*   Updated: 2025/09/04 11:08:30 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
  public:
	Array();
	Array(unsigned int n);
	Array(const Array<T> &other);
	Array<T> &operator=(const Array<T> &other);
	~Array();

	T &operator[](unsigned int index);
	unsigned int size() const;

  private:
	T *m_array;
	unsigned int m_size;
};

#include "Array.tpp"

// template <typename T>
// class Array
// {
//     public:
//         Array() : m_size(0) {
// 			m_array = new T[m_size];  };
            
//         Array(unsigned int n) : m_size(n) {
//             m_array = new T[m_size];  };

//         Array(const Array &other) : m_size(other.m_size) {
//             m_array = NULL;
// 			*this = other;  };
        
//         Array &operator=(const Array &other) {
//             if(this == &other)
//                 return(*this);
//             delete[] m_array;
//             m_size = other.m_size;
//             m_array = new T[m_size];
//             for(unsigned int i = 0; i < m_size; i++)
//                 m_array[i] = other.m_array[i];
//             return(*this);  };
        
//         ~Array() {
//             if(m_array != NULL)
//                 delete[] m_array;  };

//         T& operator[](unsigned int index) {
//             if (index >= m_size)
//                 throw OutOfBounds();
//             return m_array[index];  };
        
//         class OutOfBounds : public std::exception
//         {
//             public:
//                 const char *what() const noexcept override {
//                     return ("Index out of bounds!");  };
//         };

//         unsigned int size() {
//                 return(m_size);  };
            
//     private:
//         T               *m_array;
//         unsigned int    m_size;

// };

// #endif
