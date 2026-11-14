CXX = g++
CXXFLAGS = -std=c++20 -O3 -fsanitize=address -g  
BUILD = build
SRC = src
INCLUDE = include
INTERNAL = internal
DIRS = $(SRC) $(INTERNAL)
OBJECTS = $(shell find $(DIRS) -name "*.cpp" )

all:
	mkdir -p $(BUILD)
	$(CXX) $(OBJECTS) $(CXXFLAGS) -I$(INCLUDE) -o bin/fql


clean:
	rm -rf build $(TARGET)

.PHONY: all clean
