
maze: mazeMain.o Space.o 
	g++ mazeMain.o Space.o -g -o maze

mazeMain.o: mazeMain.cpp
	g++ -c mazeMain.cpp

Character.o: Character.hpp Character.cpp
	g++ -c Character.cpp

Space.o: Space.cpp Space.hpp
	g++ -c Space.cpp

clean:
	rm *.o maze