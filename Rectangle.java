import org.bytedeco.javacpp.*;
import org.bytedeco.javacpp.annotation.*;

@Platform(include="cpp/Rectangle.hpp")
@Namespace("Geometry")
public class Rectangle extends Polygon{
    static { Loader.load(); }
    
    public Rectangle() { allocate(); }
    
    private native void allocate();

    public native int area();

    public static void main(String[] args) {
        // Pointer objects allocated in Java get deallocated once they become unreachable,
        // but C++ destructors can still be called in a timely fashion with Pointer.deallocate()
        Rectangle r = new Rectangle();
        r.set_values(3, 4);
        System.out.println("area = " + r.area());
    }
}
