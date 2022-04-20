SOURCES  =  main.cpp figure.cpp circle.cpp rectangle.cpp square.cpp triangle.cpp
OBJECTS  =  $(SOURCES:.cpp=.o)
TARGET   =  figures
#LIBS     =  $(shell sdl-config --libs) -lGL -lGLU -lglut -lm

all: $(OBJECTS)
	g++ -o $(TARGET) $(OBJECTS) #LIBS


%o: %cpp
	g++ -o $@ -c $<


x: all
	./$(TARGET)


clean: 
	rm -rf $(OBJECTS)
	rm -rf *.o


superclean: clean
	rm -rf $(TARGET)

