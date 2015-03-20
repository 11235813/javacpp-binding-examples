/*
 * =====================================================================================
 *
 *       Filename:  Polygon.hpp
 *
 *    Description:  Header for the Polygon class
 *
 *        Version:  1.0
 *        Created:  19.03.2015 19:25:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  11235813
 *   Organization:
 *
 * =====================================================================================
 */

#ifndef POLYGON_HPP
#define POLYGON_HPP

#include <sstream>
#include <string>

namespace Geometry {
    class Polygon {
	protected:
	    int width, height;

	public:
	    int get_width() {return this->width;}
	    int get_height() {return this->height;}
	    void set_values(int a, int b) {
		this->width = a;
		this->height = b;
	    }
	    
	    template <typename T> std::string dimension_to_string (const T &dim) {
		std::ostringstream ss;
		ss << dim;
		return ss.str();
	    }
    };
}

#endif
