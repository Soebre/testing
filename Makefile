
all: Test.exe


Test.exe: Main.o
	g++ Main.o -o Test.exe

Main.o: Main.cpp
	g++ -c Main.cpp -o Main.o

