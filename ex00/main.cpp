/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:08:36 by rorollin          #+#    #+#             */
/*   Updated: 2026/09/23 14:15:27 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	int	a = 2;
	int	b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "Swapped :\na = " << a << ", b = " << b << std::endl;

	std::string	c = "chaine1";
	std::string	d = "chaine2";

	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "Swapped :\nc = " << c << ", d = " << d << std::endl;
	std::cout <<  "Min of a and b : " << min(a, b) << std::endl;
	std::cout <<  "Max of a and b : " << max(a, b) << std::endl;
	std::cout <<  "Min of c and d : " << min(c, d) << std::endl;
	std::cout <<  "Max of c and d : " << max(c, d) << std::endl;
	return (0);
}
