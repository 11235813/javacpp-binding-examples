package de.gnode.example;

import junit.framework.Test;
import junit.framework.TestCase;
import junit.framework.TestSuite;

/**
 * Unit test for simple App.
 */
public class RectangleTest 
    extends TestCase
{
    /**
     * Create the test case
     *
     * @param testName name of the test case
     */
    public RectangleTest( String testName )
    {
        super( testName );
    }

    /**
     * @return the suite of tests being tested
     */
    public static Test suite()
    {
        return new TestSuite( RectangleTest.class );
    }

    public void testRectangle()
    {
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
