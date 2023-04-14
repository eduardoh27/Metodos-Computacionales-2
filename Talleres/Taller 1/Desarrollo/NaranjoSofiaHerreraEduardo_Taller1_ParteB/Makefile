all: main.o knight.o warrior.o output

main.o: main.cpp ; g++ -c main.cpp

knight.o: knight.cpp knight.h ; g++ -c knight.cpp

warrior.o: warrior.cpp warrior.h ; g++ -c warrior.cpp

output: main.cpp knight.cpp warrior.cpp ; g++ main.o warrior.o knight.o -o output

clean: ; rm *.o  output