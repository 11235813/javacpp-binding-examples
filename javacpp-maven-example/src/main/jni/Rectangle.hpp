/*
 * =====================================================================================
 *
 *       Filename:  Rectangle.hpp
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
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Polygon.hpp"

namespace Geometry {
    class Rectangle: public Polygon {
	public:
	    int area();
    };
}

#endif
