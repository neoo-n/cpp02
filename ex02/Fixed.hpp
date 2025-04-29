/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:20:18 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/26 14:30:07 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					val;
		static const int	nb_bits;

	public:
		Fixed(void);
		Fixed(const Fixed &obj);
		Fixed(const int i);
		Fixed(const float i);
		Fixed &operator=(const Fixed &obj);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator<(const Fixed &f) const;
		bool	operator>(const Fixed &f) const;
		bool	operator<=(const Fixed &f) const;
		bool	operator>=(const Fixed &f) const;
		bool	operator==(const Fixed &f) const;
		bool	operator!=(const Fixed &f) const;

		Fixed	operator+(const Fixed &f) const;
		Fixed	operator-(const Fixed &f) const;
		Fixed	operator*(const Fixed &f) const;
		Fixed	operator/(const Fixed &f) const;
};

std::ostream	&operator<<(std::ostream &os, const Fixed &nb);

#endif