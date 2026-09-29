/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:01:53 by rorollin          #+#    #+#             */
/*   Updated: 2026/09/29 13:02:00 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

template <typename T>
class Array
{
	private:
		T				*_data;
		unsigned int	_size;

	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &other);
		~Array(void);

		Array	&operator=(Array const &other);

		T		&operator[](unsigned int i);
		T const	&operator[](unsigned int i) const;

		unsigned int	size(void) const;
};

# include "Array.tpp"

#endif
