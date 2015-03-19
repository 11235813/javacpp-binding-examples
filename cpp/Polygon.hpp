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

//#include <sstream>
//#include <string>

namespace Geometry {
    class Polygon {
	protected:
	    int width, height;

	public:
	    //const std::string& get_width();
	    int get_width() {return this->width;}
	    //const std::string& get_height();
	    int get_height() {return this->height;}
	    void set_values(int a, int b) {
		this->width = a;
		this->height = b;
	    }
    };
}

#endif
