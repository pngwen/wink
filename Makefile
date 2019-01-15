CXXFLAGS=-g
CC=g++
LD=g++

wink: wink.o termmanip.h
clean:
	rm -f *.o wink
