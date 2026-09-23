/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 00:00:00 by rorollin          #+#    #+#             */
/*   Updated: 2026/09/23 14:11:57 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp = a;

	a = b;
	b = tmp;
}

template <typename T>
T	min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T	max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif
