import org.bytedeco.javacpp.*;
import org.bytedeco.javacpp.annotation.*;

@Platform(include="cpp/Polygon.hpp")
@Namespace("Geometry")
public class Polygon extends Pointer{
    static { Loader.load(); }
    
    public Polygon() { allocate(); }
    
    private native void allocate();

    // to call the getter and setter functions
    public native int get_width();
    
    public native int get_height();
    
    public native void set_values(int a, int b);

    public static void main(String[] args) {
        // Pointer objects allocated in Java get deallocated once they become unreachable,
        // but C++ destructors can still be called in a timely fashion with Pointer.deallocate()
        Polygon p = new Polygon();
        p.set_values(3, 4);
        System.out.println("width = " + p.get_width() + ", height = " + p.get_height());
    }
}
