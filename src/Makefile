# Author: Luke Chikkala
# Makefile Template

Compiler = g++
#Flags = -Wall
FinalName = app
CppStandard = -std=c++11

#-----------------------------------------------------

all:
	$(Compiler) *.cpp -o $(FinalName) $(CppStandard)

exec:
	clear
	./$(FinalName)

clean:
	rm -rf $(FinalName)
	rm -rf *.exe

makesrc:
	cp test.cpp ../src/
	cp datefilter.cpp ../src/
	cp dow.cpp ../src/
	cp Makefile ../src/
	cp events.txt ../src/
	cp app ../src/
	mv ../src/test.cpp ../src/main.cpp

# clear && g++ test.cpp -o app && ./app