maze: mazeMain.o Space.o 
	g++ maze.o Space.o -g -o maze

mazeMain.o: mazeMain.cpp
	g++ mazeMain.cpp