package de.gnode.example;

import org.bytedeco.javacpp.*;
import org.bytedeco.javacpp.annotation.*;

@Platform(include = "Rectangle.hpp", link = "Geometry", preload="jniRectangle")
@Namespace("Geometry")
public class Rectangle extends Polygon{

    /** at runtime, the Loader.load() method automatically loads the native 
    libraries from Java resources, which were placed in the right directory 
    by the building process.
    **/
    static { Loader.load(); }
    
    public Rectangle() { allocate(); }
    
    private native void allocate();

    public native int area();

    public static void main(String[] args) {
        /** Pointer objects allocated in Java get deallocated once they become 
	unreachable, but C++ destructors can still be called in a timely fashion
	with Pointer.deallocate()
	**/
        Rectangle r = new Rectangle();
        r.setWidth(3);
        r.setHeight(4);
        
        System.out.println("RECTANGLE test:");
        System.out.println("area = " + r.area());
        
        /** Test inheritance of the overloaded '=' operator **/
        Rectangle new_r = new Rectangle();
        new_r.setWidth(6);
        new_r.setHeight(8);
        System.out.println("previous dimensions of r: width: " + r.getWidth() + ", height: " + r.getHeight());
        r = new_r;
        System.out.println("new dimensions of r: width: " + r.getWidth() + ", height: " + r.getHeight());
    }
    
}
