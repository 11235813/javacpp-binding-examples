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
	    Polygon();
	    Polygon & operator= (const Polygon & other);
	    
	    /** setters **/
	    void width(int w);
	    void height(int h);

	    /** getters **/
	    int width() const;
	    int height() const;
	    
	    template <typename T> std::string dimension_to_string (const T &dim);
    };
}

#endif
