dale.exe:	main.o usuarios.o juegos.o
	g++ main.o usuarios.o juegos.o -o dale.exe 

main.o:	main.cpp usuarios.o juegos.o
	g++ -c main.cpp 

usuarios.o:	usuarios.h usuarios.cpp
	g++ -c usuarios.cpp

juegos.o:	juegos.h juegos.cpp
	g++ -c juegos.cpp