#include <iostream>
#include "bsp.hpp"

int main(void) {

    Point const point(Fixed(0), Fixed(0));
    Point const a(Fixed(10), Fixed(10));
    Point const b(Fixed(10), Fixed(20));
    Point const c(Fixed(20), Fixed(10));

    if (bsp(a, b, c, point))
        std::cout << "Point is inside the triangle" << std::endl;
    else
        std::cout << "Point is outside" << std::endl;

    return 0;
}