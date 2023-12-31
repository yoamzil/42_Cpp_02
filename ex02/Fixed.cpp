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

#include "Fixed.hpp"

const int	Fixed::fractionalBits = 8;

Fixed::Fixed()
{
    NumberValue = 0;
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &original)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = original;
}

Fixed   &Fixed::operator=(const Fixed &original)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &original)
    {
        this->NumberValue = original.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int    Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (NumberValue);
}

void    Fixed::setRawBits(int const raw)
{
    NumberValue = raw;
}

Fixed::Fixed(const int nbr)
{
    NumberValue = nbr * 256;
}

Fixed::Fixed(const float nbr)
{
    NumberValue = roundf (nbr * 256);
}

float	Fixed::toFloat(void) const
{
    return ((float)NumberValue / 256);
}

int		Fixed::toInt(void) const
{
    return (NumberValue / 256);
}

//-----------------Insertion--------------------//

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

//-----------------Comparison--------------------//
bool	Fixed::operator>(const Fixed &obj) const
{
    return (NumberValue > obj.NumberValue);
}

bool	Fixed::operator<(const Fixed &obj) const
{
    return (NumberValue < obj.NumberValue);
}

bool	Fixed::operator>=(const Fixed &obj) const
{
    return (NumberValue >= obj.NumberValue);
}

bool	Fixed::operator<=(const Fixed &obj) const
{
    return (NumberValue <= obj.NumberValue);
}

bool	Fixed::operator==(const Fixed &obj) const
{
    return (NumberValue == obj.NumberValue);
}

bool	Fixed::operator!=(const Fixed &obj) const
{
    return (NumberValue != obj.NumberValue);
}

//-----------------Arithmetic--------------------//

Fixed	Fixed::operator+(const Fixed &obj) const
{
    return ((float)NumberValue/256 + obj.NumberValue/256);
}

Fixed	Fixed::operator-(const Fixed &obj) const
{
    return ((float)NumberValue/256 - obj.NumberValue/256);
}

Fixed	Fixed::operator*(const Fixed &obj) const
{
    return ((float)NumberValue/256 * obj.NumberValue/256);
}

Fixed	Fixed::operator/(const Fixed &obj) const
{
    return ((float)NumberValue / obj.NumberValue);
}

//-----------------Increment/Decrement--------------------//

//pre
Fixed	&Fixed::operator++()
{
    NumberValue++;
    return (*this);
}

Fixed	&Fixed::operator--()
{
    NumberValue--;
    return (*this);
}

//post

Fixed	Fixed::operator++(int)
{
    Fixed   tmp(*this);
    ++(*this);
    return (tmp);
}

Fixed	Fixed::operator--(int)
{
    Fixed   tmp(*this);
    --(*this);
    return (tmp);
}

//-----------------Min/Max--------------------//

const Fixed     &Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed     &Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

const Fixed     &Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return (b);
    else
        return (a);
}

Fixed     &Fixed::max(Fixed& a, Fixed& b)
{
    if (a < b)
        return (b);
    else
        return (a);
}
