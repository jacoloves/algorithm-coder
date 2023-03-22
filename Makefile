CXX = g++

CXXFLAGS = -Wall -O2 -std=c++14

$@: $(CXX) $(CXXFLAGS) $@.cpp
