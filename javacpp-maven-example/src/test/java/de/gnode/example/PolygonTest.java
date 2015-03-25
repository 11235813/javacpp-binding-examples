package de.gnode.example;

import junit.framework.Test;
import junit.framework.TestCase;
import junit.framework.TestSuite;

/**
 * Unit test for simple App.
 */
public class PolygonTest 
    extends TestCase
{
    /**
     * Create the test case
     *
     * @param testName name of the test case
     */
    public PolygonTest( String testName )
    {
        super( testName );
    }

    /**
     * @return the suite of tests being tested
     */
    public static Test suite()
    {
        return new TestSuite( PolygonTest.class );
    }

    public void testPolygon()
    {
    /** Pointer objects allocated in Java get deallocated once they become 
	unreachable, but C++ destructors can still be called in a timely fashion
	with Pointer.deallocate()
	**/
        Polygon p = new Polygon();
        p.setWidth(3);
        p.setHeight(4);
        
        System.out.println("POLYGON test:");
        System.out.println("width = " + p.getWidth() + ", height = " + p.getHeight());
        
        final int w = p.getWidth();
        final int h = p.getHeight();
        System.out.println("width = " + p.dimension_to_string(w) + ", height = " + p.dimension_to_string(h));
    }
}
