

MyDef =

MyDef2 = Med dig



all: Test.exe Regel


Test.exe: Main.o
	g++ Main.o -o Test.exe

Main.o: Main.cpp
	g++ -c Main.cpp -o Main.o

Regel:
	echo $(MyDef) $$(MyDef2)
	
clean:
	del *.o
	del *.exe
	


