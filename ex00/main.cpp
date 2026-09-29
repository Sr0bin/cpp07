/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:08:36 by rorollin          #+#    #+#             */
/*   Updated: 2026/09/23 14:16:08 by rorollin         ###   ########.fr       */
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
	std::cout <<  "Min of a and b : " << ::min(a, b) << std::endl;
	std::cout <<  "Max of a and b : " << ::max(a, b) << std::endl;
	std::cout <<  "Min of c and d : " << ::min(c, d) << std::endl;
	std::cout <<  "Max of c and d : " << ::max(c, d) << std::endl;
	std::string const	e = "const1";
	std::string const	f = "const2";
	std::cout <<  "Min of 1 and 2 : " << ::min(1, 2) << std::endl;
	std::cout <<  "Max of const e and f : " << ::max(e, f) << std::endl;
	return (0);
}
