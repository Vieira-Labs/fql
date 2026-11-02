CXX = g++
CXXFLAGS = -std=c++20 -O3 -Wall -Wextra -fsanitize=address -g  -Werror
BUILD = build
SRC = src
INCLUDE = include
INTERNAL = internal
DIRS = $(SRC) $(INTERNAL)
OBJECTS = $(shell find $(DIRS) -name ".*cpp" )

all:
	mkdir -p $(BUILD)
	$(CXX) $(OBJECTS) $(CXXFLAGS) -T linker.ld -I$(INCLUDE)


clean:
	rm -rf build $(TARGET)

.PHONY: all clean
