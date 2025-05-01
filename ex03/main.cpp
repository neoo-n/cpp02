/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:37:00 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/26 14:37:56 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Fixed.hpp"

int	main(void)
{
	Fixed const a(15.63f);
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	Fixed i(15.63f);
	Fixed j(10.65f);

	std::cout << "----------------------- VALUES -------------------------------" << std::endl;
	std:: cout << "a : " << a << std::endl;
	std:: cout << "b : " << b << std::endl;
	std:: cout << "c : " << c << std::endl;
	std:: cout << "d : " << d << std::endl;

	std::cout << "---------------- COMPARISON OPERATORS ------------------------" << std::endl;
	if (a < b)
		std::cout << "a < b" << std::endl;
	else
		std::cout << "a > b" << std::endl;
	if (d > b)
		std::cout << "d > b" << std::endl;
	else
		std::cout << "d < b" << std::endl;
	if (a <= b)
		std::cout << "a <= b" << std::endl;
	else
		std::cout << "a >= b" << std::endl;
	if (a >= b)
		std::cout << "a >= b" << std::endl;
	else
		std::cout << "a <= b" << std::endl;
	if (b == d)
		std::cout << "b == d" << std::endl;
	else
		std::cout << "b != d" << std::endl;
	if (a != d)
		std::cout << "a != d" << std::endl;
	else
		std::cout << "a == d" << std::endl;

	std::cout << "---------------- ARITHMETIC OPERATORS ------------------------" << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;

	std::cout << "--------------- INCREMENT / DECREMENT OPERATORS --------------" << std::endl;
	std :: cout << "i = " << i << std::endl;
	std::cout << "++i = " << ++i << std::endl;
	std::cout << "--i = " << --i << std::endl;
	std :: cout << "i = " << i << std::endl;
	std::cout << "i++ = " << i++ << std::endl;
	std :: cout << "i = " << i << std::endl;
	std::cout << "i-- = " << i-- << std::endl;
	std :: cout << "i = " << i << std::endl;

	std::cout << "--------------- INCREMENT / DECREMENT OPERATORS --------------" << std::endl;
	std::cout << "min(a, b) = " << Fixed::min(a,b) << std::endl;
	std::cout << "const min(i, j) = " << Fixed::min(i,j) << std::endl;
	std::cout << "max(a, b) = " << Fixed::max(a,b) << std::endl;
	std::cout << "const max(i, j) = " << Fixed::max(i,j) << std::endl;

	return (0);
}
 