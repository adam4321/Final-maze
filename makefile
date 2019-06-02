maze: mazeMain.o Space.o 
	g++ maze.o Space.o -g -o maze

mazeMain.o: mazeMain.cpp
	g++ -c mazeMain.cpp

Space.o: Space.cpp Space.hpp
	g++ -c Space.cpp

clean:
	rm *.o maze