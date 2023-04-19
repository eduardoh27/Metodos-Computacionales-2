all1: parabolico.cpp animation.py ; g++ -o output parabolico.cpp ; ./output ; python animation.py 

all: compilarcpp ejecutarcpp ejecutarpy

compilarcpp: parabolico.cpp ; g++ -o output parabolico.cpp 

ejecutarcpp: output ; ./output

ejecutarpy: animation.py ; python animation.py

clean: ; rm *.csv *.gif output

