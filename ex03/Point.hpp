/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 12:23:00 by dvauthey          #+#    #+#             */
/*   Updated: 2025/05/01 13:19:18 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed	x;
		const Fixed	y;
	public:
		Point(void);
		Point(const Fixed n_x, const Fixed n_y);
		Point(const Point &f);
		Point &operator=(const Point &obj);
		~Point(void);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
		void	setX(const Fixed n_x);
		void	setY(const Fixed n_y);
};

#endif