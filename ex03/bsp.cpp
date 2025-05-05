/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:50:40 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/05 11:55:59 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	area(Point const a, Point const b, Point const c)
{
	Fixed	area;

	area = a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY());
	if (area < 0)
		area = area * (-1);
	area = area * (1.0 / 2.0);
	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	v_area;
	Fixed	area1;
	Fixed	area2;
	Fixed	area3;
	Fixed	total;

	v_area = area(a, b, c);
	area1 = area(a, b, point);
	area2 = area(a, c, point);
	area3 = area(c, b, point);
	if (area1 == 0 || area2 == 0 || area3 == 0)
		return (false);
	total = area1 + area2 + area3;
	if (total == v_area)
		return (true);
	return (false);
}