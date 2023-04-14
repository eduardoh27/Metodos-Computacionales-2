all: compilarcpp ejecutarcpp ejecutarpy

compilarcpp: parabolico.cpp ; g++ -o output parabolico.cpp 

ejecutarcpp: output ; ./output

ejecutarpy: animation.py ; python animation.py

clean: ; rm *.csv *.gif output

