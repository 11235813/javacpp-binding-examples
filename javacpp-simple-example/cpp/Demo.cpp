/*
 * =====================================================================================
 *
 *       Filename:  Demo.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  19.03.2015 19:29:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  11235813
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
#include "Polygon.hpp"
#include "Rectangle.hpp"

using namespace std;
using namespace Geometry;

int main() {
    Rectangle r;

    r.width(6);
    r.height(8);

    cout << r.area() << endl;
    
    //test assignment constructor
    Rectangle new_r;
    new_r.width(3);
    new_r.height(4);
    cout << "previous dimensions of r: width: " << r.width() << ", height: " << r.height() << endl;
    r = new_r;
    cout << "new dimensions of r: width: " << r.width() << ", height: " << r.height() << endl;

    return 0;
}

