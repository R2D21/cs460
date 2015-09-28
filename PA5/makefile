# Name: Renee Iinuma, Kyle Lee, and Wesley Kepke. 
# File: makefile
# Created: September 27, 2015
# Last Modified: September 27, 2015
# Class: CS 460 (Compiler Construction)

# This is the makefile for the front end of our C compiler. 

CC = g++
CFLAGS = -Wall
FLEX = flex
LIBS = -L/usr/local/lib -lfl
OBJS = lex.yy.o symbolTableEntry.o symbolTable.o

main.o: $(OBJS)
	$(CC) -o $@ $(OBJS) 

lex.yy.c: calc.l 
	$(FLEX) $<

symbolTableEntry.cpp: symbolTableEntry.h
	$(CC) $(CFLAGS) symbolTableEntry.cpp -o $@

symbolTable.cpp: symbolTable.h
	$(CC) $(CLFAGS) symbolTable.cpp -o $@

clean:
	-rm -f lex.yy.* *.o lexer
