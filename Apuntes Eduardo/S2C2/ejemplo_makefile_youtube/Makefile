all: main.o message.o output

main.o: main.cpp
	g++ -c main.cpp

message.o: message.cpp message.h
	g++ -c message.cpp

output: main.cpp message.cpp
	g++ main.o message.o -o output
