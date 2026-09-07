CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g
OBJ      = main.o punto.o
TARGET	 = main
	
main: $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)
	
main.o: main.cpp punto.h
	$(CXX) $(CXXFLAGS) -c main.cpp
	
punto.o: punto.cpp punto.h
	$(CXX) $(CXXFLAGS) -c punto.cpp
	
clean:
	rm -f $(OBJ) $(TARGET)