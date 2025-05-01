/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:31:42 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/01 13:20:15 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Point.hpp"

Point::Point(void)
: x(0), y(0)
{
	std::cout << "Point default constructor" << std::endl;
}

Point::Point(const Fixed n_x, const Fixed n_y)
: x(n_x), y(n_y)
{
	std::cout << "Point constructor" << std::endl;
}

Point::Point(const Point &f)
: x(f.x), y(f.y)
{
	std::cout << "Point copy constructor" << std::endl;
}

Point	&Point::operator=(const Point &obj)
{
	this->setX(obj.x);
	this->setY(obj.y);
	std::cout << "Point assignment operator" << std::endl;
}

Point::~Point(void)
{
	std::cout << "Point default destructor" << std::endl;
}

Fixed	Point::getX(void) const
{
	return (x);
}

Fixed	Point::getY(void) const
{
	return (y);
}

void	Point::setX(const Fixed n_x)
{
	this->setX(n_x);
}

void	Point::setY(const Fixed n_y)
{
	this->setY(n_y);
}
