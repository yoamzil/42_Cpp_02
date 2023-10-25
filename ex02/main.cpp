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

int main(void)
{
    Fixed           a;
    Fixed const     b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;

    // std::cout << Fixed::max(a, b) << std::endl;

    // --------------------Comparison tests----------------
    // Fixed a(3.5f);
    // Fixed b(3.5f);

    // if (a > b)
    // {
    //     std::cout << "a is greater than b" << std::endl;
    // }
    // else
    // {
    //     std::cout << "a is not greater than b" << std::endl;
    // }

    // --------------------Arithmetic tests----------------
    // Fixed a(5.05f);
    // Fixed b(2);

    // Fixed c = (a + b);
    // std::cout << "a + b = " << c << std::endl;

    // c = a - b;
    // std::cout << "a - b = " << c << std::endl;

    // c = a * b;
    // std::cout << "a * b = " << c << std::endl;

    // c = a / b;
    // std::cout << "a / b = " << c << std::endl;

    return (0);
}