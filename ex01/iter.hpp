/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:16:24 by rorollin          #+#    #+#             */
/*   Updated: 2026/09/29 12:59:50 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>

template <typename T, typename F>
void	iter(T *array, size_t const len, F f)
{
	if (!array)
		return ;
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

#endif
