CXX = g++
CXXFLAGS = -std=c++17 -Wall
CXXGDB = -ggdb

all: test func

clean:
	rm test func

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

func: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) functions_to_implement.cpp -o func