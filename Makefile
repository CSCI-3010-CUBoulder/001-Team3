CXX = g++
CXXFlags = -std=c++17 -Wall
CXXGDB = -ggdb

all: test

clean: 
	rm test

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

func: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) functions_to_implement.cpp -o func