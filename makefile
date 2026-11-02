CXX = g++
CXXFLAGS = -std=c++20 -O3 -Wall -Wextra
TARGET = bin/newton

SRCS = $(wildcard src/*.cpp src/*/*.cpp)

all:
	@mkdir -p build
	@for file in $(SRCS); do \
		obj="build/$$(basename $$file .cpp).o"; \
		echo "Compiling $$file..."; \
		$(CXX) $(CXXFLAGS) -c $$file -o $$obj || exit 1; \
	done
	$(CXX) build/*.o -o $(TARGET)

clean:
	rm -rf build $(TARGET)

.PHONY: all clean