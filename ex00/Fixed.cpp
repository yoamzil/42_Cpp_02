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

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    NumberValue = 0;
}

Fixed::Fixed(const Fixed &original)
{
    // NumberValue = original.NumberValue;
    // fractionalBits = original.fractionalBits;
    *this = original;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int    Fixed::getRawBits(void) const
{
    return (NumberValue);
}

int     Fixed::setRawBits(int const raw)
{
    NumberValue = raw;
}

Fixed   &Fixed::operator=(const Fixed &original)
{
    if (this != &original)
    {
        this->NumberValue = original.NumberValue;
    }
    return (*this);
}
