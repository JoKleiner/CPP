/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:50:51 by joklein           #+#    #+#             */
/*   Updated: 2025/09/04 11:08:40 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : m_size(0){
	m_array = new T[m_size];
};

template <typename T>
Array<T>::Array(unsigned int n) : m_size(n){
	m_array = new T[m_size];
};

template <typename T>
Array<T>::Array(const Array &other) : m_size(other.m_size){
	m_array = new T[m_size];
	for (unsigned int i = 0; i < m_size; i++)
		m_array[i] = other.m_array[i];
};

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other){
	if (this == &other)
		return (*this);
	delete[] m_array;
	m_size = other.m_size;
	m_array = new T[m_size];
	for (unsigned int i = 0; i < m_size; i++)
		m_array[i] = other.m_array[i];
	return (*this);
};

template <typename T>
Array<T>::~Array(){
	if (m_array != NULL)
		delete[] m_array;
	m_array = NULL;
};

template <typename T>
T &Array<T>::operator[](unsigned int index){
	if (index >= m_size)
		throw std::out_of_range("Out of bounds");
	return (m_array[index]);
};

template <typename T>
unsigned int Array<T>::size() const{
	return (m_size);
};
