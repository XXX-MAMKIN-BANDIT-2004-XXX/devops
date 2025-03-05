CXX = g++
CXXFLAGS = -Wall -g
TARGET = devops

$(TARGET): devops.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) devops.o

devops.o: devops.cpp
	$(CXX) $(CXXFLAGS) -c devops.cpp

clean:
	rm -f *.o $(TARGET)