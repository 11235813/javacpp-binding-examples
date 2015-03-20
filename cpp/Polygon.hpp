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
        Polygon() {
            width = 0;
            height = 0;
        }
        Polygon & operator= (const Polygon & other) {
            if (this != &other) {
                this->width = other.get_width();
                this->height = other.get_height();
            }

            return *this;
        }
	    int get_width() const {return this->width;}
	    int get_height() const {return this->height;}
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
