/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 00:00:00 by rorollin          #+#    #+#             */
/*   Updated: 2026/09/29 13:04:08 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "Array.hpp"

int	main(void)
{
	Array<int>			empty;
	Array<int>			nums(3);
	Array<std::string>	a(2);

	std::cout << "empty size: " << empty.size() << std::endl;
	std::cout << "nums: " << nums[0] << nums[1] << nums[2] << std::endl;

	a[0] = "hello";
	a[1] = "world";
	Array<std::string>	b(a);
	b[0] = "changed";
	std::cout << "a: " << a[0] << " " << a[1] << std::endl;
	std::cout << "b: " << b[0] << " " << b[1] << std::endl;

	try
	{
		a[2] = "oops";
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
