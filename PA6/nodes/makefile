all: testNode

testNode: nodeMain.cpp iterN.o
	g++ nodeMain.cpp iterN.o astNode.o -o testNode

iterN.o: iterN.cpp iterN.h astNode.o
	g++ -c iterN.cpp 

astNode.o: astNode.cpp astNode.h
	g++ -c astNode.cpp 

clean:
	rm -rf *.o testNode


