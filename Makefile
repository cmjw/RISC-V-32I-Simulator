CXX = g++
FLAGS = -Wall -Wextra -std=c++17

SRC = src

SOURCES = $(SRC)/main.cpp $(SRC)/mem.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = cpu

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

$(SRC)/%.o: $(SRC)/%.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)