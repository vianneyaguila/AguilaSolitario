bin/Main: src/Main.cpp include/*
	c++ src/Main.cpp -o bin/Main -lcurses -I include 

run : bin/Main
	./bin/Main