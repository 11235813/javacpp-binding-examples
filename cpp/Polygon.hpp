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
	    int width_, height_;

	public:
	    Polygon() {
		width_ = 0;
		height_ = 0;
	    }
	    Polygon & operator= (const Polygon & other) {
		if (this != &other) {
		    width_ = other.width();
		    height_ = other.height();
		}

		return *this;
	    }
	    
	    /** setters **/
	    void width(int w) {width_ = w;}
	    void height(int h) {height_ = h;}

	    /** getters **/
	    int width() const {return width_;}
	    int height() const {return height_;}
	    
	    template <typename T> std::string dimension_to_string (const T &dim) {
		std::ostringstream ss;
		ss << dim;
		return ss.str();
	    }
    };
}

#endif
