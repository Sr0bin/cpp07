/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:16:37 by rorollin          #+#    #+#             */
/*   Updated: 2026/09/24 20:26:20 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void	print(T &x)
{
	std::cout << x << std::endl;
}

void	increment(int &x)
{
	x++;
}

int	main(void)
{
	int					nums[] = {1, 2, 3};
	std::string const	strs[] = {"foo", "bar", "baz"};

	::iter(nums, 3, increment);
	::iter(nums, 3, print<int>);
	::iter(strs, 3, print<std::string const>);
	::iter<int>(NULL, 3, increment);
	return (0);
}
