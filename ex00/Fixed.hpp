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
class Fixed
{
	private:
		int					val;
		static const int	nb_bits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed &obj);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif