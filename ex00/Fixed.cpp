/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:26:18 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/26 14:40:41 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Fixed.hpp"

Fixed::Fixed(void)
: val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
: val(obj.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &obj)
{
	this->val = obj.getRawBits();
	std::cout << "Assignement operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits fct called" << std::endl;
	return (val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits fct called" << std::endl;
	val = raw;
}
