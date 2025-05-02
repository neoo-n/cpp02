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

#include "Point.hpp"

int	main(void)
{
	Point	a(1, 2);
	Point	b(-6, -3);
	Point	c(3, -2);
	Point	point(-1, -2);
	Point	point1(-5, -4);
	bool	is_in;

	is_in = bsp(a, b, c, point);
	if (is_in)
		std::cout << "Le point est dans la triangle" << std::endl;
	else
		std::cout << "Le point n'est pas dans la triangle" << std::endl;
	is_in = bsp(a, b, c, point1);
	if (is_in)
		std::cout << "Le point est dans la triangle" << std::endl;
	else
		std::cout << "Le point n'est pas dans la triangle" << std::endl;
	return (0);
}
 