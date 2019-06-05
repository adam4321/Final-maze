
maze: mazeMain.o Space.o Character.o Start.o Dinosaur.o Key.o Cheese.o Door.o Finish.o
	g++ -std=c++11 mazeMain.o Space.o Character.o Start.o Dinosaur.o Key.o Cheese.o Door.o Finish.o -g -o maze

mazeMain.o: mazeMain.cpp
	g++ -std=c++11 -c mazeMain.cpp

Character.o: Character.hpp Character.cpp
	g++ -std=c++11 -c Character.cpp

Space.o: Space.cpp Space.hpp
	g++ -std=c++11 -c Space.cpp

Start.o: Start.cpp Start.hpp
	g++ -std=c++11 -c Start.cpp

Dinosaur.o: Dinosaur.cpp Dinosaur.hpp
	g++ -std=c++11 -c Dinosaur.cpp

Key.o: Key.cpp Key.hpp
	g++ -std=c++11 -c Key.cpp

Cheese.o: Cheese.cpp Cheese.hpp
	g++ -std=c++11 -c Cheese.cpp

Door.o: Door.cpp Door.hpp
	g++ -std=c++11 -c Door.cpp

Finish.o: Finish.cpp Finish.hpp
	g++ -std=c++11 -c Finish.cpp

clean:
	rm *.o maze