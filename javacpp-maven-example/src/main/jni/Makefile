# makefile for building a shared lib and a demo application that uses that library

CC	= g++
BASEDIR	= ../../..
VERSION	= ` date "+%Y.%m%d%" `

clean:
	rm *.o *.so *.gch demo
 
main:
	echo "Creating shared lib"
	$(CC) -Wall -fPIC -o $(BASEDIR)/target/polygon.o -c Polygon.cpp
	$(CC) -Wall -fPIC -o $(BASEDIR)/target/rectangle.o -c Rectangle.cpp
	mkdir -p $(BASEDIR)/target/classes/linux-x86
	$(CC) -Wall -shared -o $(BASEDIR)/target/classes/linux-x86/libGeometry.so $(BASEDIR)/target/polygon.o $(BASEDIR)/target/rectangle.o

demo: 
	echo "Creating demo program"
	$(CC) Demo.cpp -o $(BASEDIR)/target/demo -L . -lGeometry
