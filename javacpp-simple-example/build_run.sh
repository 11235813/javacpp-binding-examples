#COMPILE
javac -cp ../libs/javacpp.jar Polygon.java Rectangle.java

java -jar ../libs/javacpp.jar Polygon Rectangle

#RUN
java -cp .:../libs/javacpp.jar Polygon
java -cp .:../libs/javacpp.jar Rectangle
