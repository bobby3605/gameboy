CXX = g++
CXX_FLAGS = -g

SRCS := $(shell find $(SOURCEDIR) -name '*.cpp')

all:
	$(CXX) $(CXX_FLAGS) $(SRCS) -o emulator

run: all
	./emulator

clean:
	rm emulator

debug: all
	gdb emulator
