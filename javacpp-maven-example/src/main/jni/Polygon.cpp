/*
 * =====================================================================================
 *
 *       Filename:  Polygon.cpp
 *
 *    Description:  Definition for the Polygon class
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

#include "Polygon.hpp"
using namespace Geometry;

Geometry::Polygon::Polygon() {
    width_ = 0;
    height_ = 0;
}

Geometry::Polygon & Geometry::Polygon::operator= (const Geometry::Polygon & other) {
    if (this != &other) {
	width_ = other.width();
	height_ = other.height();
    }

    return *this;
}

/** setters **/
void Geometry::Polygon::width(int w) {width_ = w;}
void Geometry::Polygon::height(int h) {height_ = h;}

/** getters **/
int Geometry::Polygon::width() const {return width_;}
int Geometry::Polygon::height() const {return height_;}

template <typename T> std::string Geometry::Polygon::dimension_to_string(const T &dim) {
    std::ostringstream ss;
    ss << dim;
    return ss.str();
}
