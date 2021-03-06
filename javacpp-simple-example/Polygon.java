import org.bytedeco.javacpp.*;
import org.bytedeco.javacpp.annotation.*;

@Platform(include="cpp/Polygon.hpp")
@Namespace("Geometry")
public class Polygon extends Pointer{

    /** at runtime, the Loader.load() method automatically loads the native 
    libraries from Java resources, which were placed in the right directory 
    by the building process.
    **/
    static { Loader.load(); }
    
    public Polygon() { allocate(); }
    
    private native void allocate();
    
    /** overload the assignment operator **/
    public native @ByRef @Name("operator=") Polygon put(@Const @ByRef Polygon other);

    /** setter functions **/
    public native @Name("width") void setWidth(int w);
    public native @Name("height") void setHeight(int h);
    
    /** getter functions **/
    public native @Name("width") int getWidth();
    public native @Name("height") int getHeight();
    
    /** equivalents for the template functions **/
    public native @StdString String dimension_to_string(@Const @ByRef int dim);
    public native @StdString String dimension_to_string(@Const @ByRef float dim);
    public native @StdString String dimension_to_string(@Const @ByRef double dim);

    public static void main(String[] args) {
	/** Pointer objects allocated in Java get deallocated once they become 
	unreachable, but C++ destructors can still be called in a timely fashion
	with Pointer.deallocate()
	**/
        Polygon p = new Polygon();
        p.setWidth(3);
        p.setHeight(4);
        
        System.out.println("POLYGON test:");
        System.out.println("width = " + p.getWidth() + ", height = " + p.getHeight());
        
        System.out.println("width = " + p.dimension_to_string(p.getWidth()) + ", height = " + p.dimension_to_string(p.getHeight()));
    }
    
}
