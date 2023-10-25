/* ************************************************************************************** */
/*																						  */
/*                                                						d8b		888       */
/*                                                  					Y8P		888       */
/*                                                      						888       */
/*		888  888	  .d88b.   	8888b.  	88888b.d88b.	88888888	888 	888       */
/*		888  888 	d88""88b     	"88b 	888 "888 "88b    	d88P 	888 	888       */
/*		888  888 	888  888 	.d888888 	888  888  888		d88P   	888 	888       */
/*		Y88b 888 	Y88..88P 	888  888 	888  888  888	  d88P    	888 	888       */
/*		"Y88888  	"Y88P"  	"Y888888 	888  888  888	88888888 	888 	888       */
/*	  		 888																          */
/*		Y8b d88P																          */
/*		"Y88P"									By: yoamzil <yoamzil@student.1337.ma>     */
/*																						  */
/* ************************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
	private:

		int					NumberValue;
		static const int	fractionalBits = 8;

	public:

		// Ex00
		Fixed();
		~Fixed();
		Fixed(const Fixed &original);
		Fixed	&operator=(const Fixed &original);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		// Ex01
		Fixed(const int nbr);
		Fixed(const float nbr);
		
		float	toFloat(void) const;
		int		toInt(void) const;

		// Ex02
			// Comparison operators:
			bool	operator>(const Fixed &obj) const;
			bool	operator<(const Fixed &obj) const;
			bool	operator>=(const Fixed &obj) const;
			bool	operator<=(const Fixed &obj) const;
			bool	operator==(const Fixed &obj) const;
			bool	operator!=(const Fixed &obj) const;

			// Arithmetic operators
			Fixed	operator+(const Fixed &obj) const;
			Fixed	operator-(const Fixed &obj) const;
			Fixed	operator*(const Fixed &obj) const;
			Fixed	operator/(const Fixed &obj) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif