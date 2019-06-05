
maze: mazeMain.o Space.o Character.o
	g++ -std=c++11 mazeMain.o Space.o Character.o -g -o maze

mazeMain.o: mazeMain.cpp
	g++ -std=c++11 -c mazeMain.cpp
	
Character.o: Character.hpp Character.cpp
	g++ -std=c++11 -c Character.cpp

Space.o: Space.cpp Space.hpp
	g++ -std=c++11 -c Space.cpp

clean:
	rm *.o maze