CXX = g++
CXXFLAGS = -Wall -g
TARGET = BubbleSort

Main: $(TARGET).o Main.o Test.o
	$(CXX) $(CXXFLAGS) -o ../bin/Main Main.o $(TARGET).o
	$(CXX) $(CXXFLAGS) -o ../bin/Test Test.o $(TARGET).o

$(TARGET).o: 
	$(CXX) $(CXXFLAGS) -c ../src/$(TARGET).cpp

Main.o:
	$(CXX) $(CXXFLAGS) -c ../src/Main.cpp
	
Test.o:
	$(CXX) $(CXXFLAGS) -c ../src/Test.cpp
	
clean:
	rm -f *.o $(TARGET) Test 
