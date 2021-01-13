OBJECTSO = funcs1.o funcs2.o funcs3.o funcs4.o
OBJECTSH = funcs1.h funcs2.h funcs3.h funcs4.h

main: main.o $(OBJECTSO)
	g++ -o main main.o $(OBJECTSO)

tests: tests.o $(OBJECTSO)
	g++ -o tests tests.o $(OBJECTSO)

main.o: main.cpp $(OBJECTSH)
	g++ -c main.cpp

tests.o: tests.cpp $(OBJECTSH)
	g++ -c tests.cpp

funcs1.o: funcs1.cpp funcs1.h 
	g++ -c funcs1.cpp

funcs2.o: funcs2.cpp funcs2.h
	g++ -c funcs2.cpp

funcs3.o: funcs3.cpp funcs3.h
	g++ -c funcs3.cpp

funcs4.o: funcs4.cpp funcs4.h 
	g++ -c funcs4.cpp

clean:
	rm tests.o main.o tests main $(OBJECTSO)
