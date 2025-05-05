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

//CONSTRUCTORS, ASSIGNEMENT & DESTRUCTORS
const int	Fixed::nb_bits = 8;

Fixed::Fixed(void)
: val(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
: val(obj.val)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i)
: val(i << nb_bits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float i)
: val(roundf(i * (1 << nb_bits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &obj)
{
	this->val = obj.getRawBits();
	// std::cout << "Assignement operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called"<< toFloat() << std::endl;
}

//----------------- MEMBER METHODS ---------------------------

// VAL
int		Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits fct called" << std::endl;
	return (val);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits fct called" << std::endl;
	val = raw;
}

// CONVERTERS
float	Fixed::toFloat(void) const
{
	return ((float)val / (1 << nb_bits));
}

int		Fixed::toInt(void) const
{
	return (val >> nb_bits);
}

// -------------- OVERLOAD OPERATORS -----------------
// COMPARISON OPERATOR
bool	Fixed::operator<(const Fixed &f) const
{
	return (this->val < f.val);
}

bool	Fixed::operator>(const Fixed &f) const
{
	return (this->val > f.val);
}

bool	Fixed::operator<=(const Fixed &f) const
{
	return (this->val <= f.val);
}

bool	Fixed::operator>=(const Fixed &f) const
{
	return (this->val >= f.val);
}

bool	Fixed::operator==(const Fixed &f) const
{
	return (this->val == f.val);
}

bool	Fixed::operator!=(const Fixed &f) const
{
	return (this->val != f.val);
}

// ARITHMETIC OPERATORS
Fixed	Fixed::operator+(const Fixed &f) const
{
	Fixed	obj(this->toFloat() + f.toFloat());
	return (obj);
}

Fixed	Fixed::operator-(const Fixed &f) const
{
	Fixed	obj(this->toFloat() - f.toFloat());
	return (obj);
}

Fixed	Fixed::operator*(const Fixed &f) const
{
	Fixed	obj(this->toFloat() * f.toFloat());
	return (obj);
}

Fixed	Fixed::operator/(const Fixed &f) const
{
	Fixed	obj(0);
	if (f.toFloat() != 0)
	{
		obj.setRawBits(roundf((this->toFloat() / f.toFloat()) * (1 << nb_bits)));
	}
	return (obj);
}

// ITERATION OPERATORS
Fixed	&Fixed::operator++(void)
{
	val++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	obj(0);
	obj.setRawBits(val);
	val++;
	return (obj);
}

Fixed	&Fixed::operator--(void)
{
	val--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	obj(0);
	obj.setRawBits(val);
	val--;
	return (obj);
}

// MIN AND MAX
Fixed	Fixed::min(Fixed &i, Fixed &j)
{
	if (i < j)
		return (i);
	return (j);
}

const Fixed	Fixed::min(const Fixed &i, const Fixed &j)
{
	if (i < j)
		return (i);
	return (j);
}

Fixed	Fixed::max(Fixed &i, Fixed &j)
{
	if (i > j)
		return (i);
	return (j);
}

const Fixed	Fixed::max(const Fixed &i, const Fixed &j)
{
	if (i > j)
		return (i);
	return (j);
}

// -------------- OUT FUNCTIONS ----------------------

// OVERLOAD OPERATORS
std::ostream	&operator<<(std::ostream &os, const Fixed &nb)
{
	os << nb.toFloat();
	return (os);
}