/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:01:37 by rorollin          #+#    #+#             */
/*   Updated: 2026/09/29 13:01:40 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _data(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]()), _size(n)
{
}

template <typename T>
Array<T>::Array(Array const &other) : _data(NULL), _size(0)
{
	*this = other;
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] _data;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &other)
{
	if (this == &other)
		return (*this);

	T	*copy = new T[other._size]();
	try
	{
		for (unsigned int i = 0; i < other._size; i++)
			copy[i] = other._data[i];
	}
	catch (...)
	{
		delete[] copy;
		throw ;
	}
	delete[] _data;
	_data = copy;
	_size = other._size;
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw std::out_of_range("Array: index out of bounds");
	return (_data[i]);
}

template <typename T>
T const	&Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw std::out_of_range("Array: index out of bounds");
	return (_data[i]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}

#endif
