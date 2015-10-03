# Name: Renee Iinuma, Kyle Lee, and Wesley Kepke
# File: KRW_Makefile
# Created: September 28, 2015
# Last Modified: October 1, 2015

# This is the makefile for the front end of our ANSI C compiler.

# Macros
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
OBJS = ../SymbolTableTest/main.o \
	../classes/symbolTable.o ../classes/symbolTableEntry.o \
	../classes/scope.o

# Targets, dependencies, and rules
all: ../SymbolTableTest/TestST

../SymbolTableTest/TestST: $(OBJS)
	$(CC) $(LFLAGS) -o $@ $(OBJS) $(LIBS)

../SymbolTableTest/main.o: ../SymbolTableTest/mainST.cpp \
		../classes/symbolTable.o ../classes/symbolTableEntry.o \
	../classes/scope.o
	$(CC) $(CFLAGS) ../SymbolTableTest/mainST.cpp -o $@  

../classes/symbolTableEntry.o: ../classes/symbolTableEntry.cpp \
				../classes/symbolTableEntry.h
	$(CC) $(CFLAGS) $< -o $@

../classes/scope.o: ../classes/scope.cpp ../classes/scope.h
	$(CC) $(CFLAGS) $< -o $@

../classes/symbolTable.o: ../classes/symbolTable.cpp \
				../classes/symbolTable.h \
				../classes/symbolTableEntry.h
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJS) ../SymbolTableTest/TestST
