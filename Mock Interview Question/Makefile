OBJECTSO = Node.o
OBJECTSH = Node.h

main: main.o $(OBJECTSO)
	g++ -o main main.o $(OBJECTSO)

tests: tests.o $(OBJECTSO)
	g++ -o tests tests.o $(OBJECTSO)

main.o: main.cpp $(OBJECTSH)
	g++ -c main.cpp

tests.o: tests.cpp $(OBJECTSH)
	g++ -c tests.cpp

Node.o: Node.cpp Node.h 
	g++ -c Node.cpp

clean:
	rm tests.o main.o tests main $(OBJECTSO)
