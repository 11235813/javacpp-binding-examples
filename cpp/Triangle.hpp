/*
 * =====================================================================================
 *
 *       Filename:  Triangle.hpp
 *
 *    Description:  Header for the Rectangle class
 *
 *        Version:  1.0
 *        Created:  19.03.2015 19:27:33
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  11235813
 *   Organization:
 *
 * =====================================================================================
 */
#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Polygon.hpp"

namespace Geometry {
    class Triangle: public Polygon {
	public:
	    int area() {return this->width * this->height / 2;}
    };
}

#endif