/*
 * =====================================================================================
 *
 *       Filename:  Rectangle.cpp
 *
 *    Description:  Definition for the Rectangle class
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

#include "Rectangle.hpp"
using namespace Geometry;

int Geometry::Rectangle::area() {
  return width_ * height_;
  
}
