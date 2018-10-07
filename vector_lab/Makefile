CXX = g++
CXXFLAGS = -Wall -g
OBJECTS = Vector.o vector_client.o

all: vector_client

vector_client : $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o vector_client $(OBJECTS)

Vector.o : Vector.cc
	$(CXX) $(CXXFLAGS) -c Vector.cc

vector_client.o: vector_client.cc
	$(cxx) $(CXXFLAGS) -c vector_client.cc

clean:
	rm *.o