# Name: Renee Iinuma, Kyle Lee, and Wesley Kepke
# File: KRW_Makefile
# Created: September 28, 2015
# Last Modified: September 28, 2015

# This is the makefile for the front end of our ANSI C compiler.

# Macros
OBJS = ../KRW_ObjectFiles/main.o ../KRW_ObjectFiles/symbolTable.o ../KRW_ObjectFiles/symbolTableEntry.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

# Targets, dependencies, and rules
all:	../KRW_ObjectFiles/krwFrontEnd

../KRW_ObjectFiles/krwFrontEnd: $(OBJS)
	$(CC) $(LFLAGS) -o $@ $(OBJS)

../KRW_ObjectFiles/main.o: ../KRW_Main/main.cpp ../KRW_Objects/symbolTableEntry.cpp ../KRW_Objects/symbolTableEntry.h ../KRW_Objects/symbolTable.cpp ../KRW_Objects/symbolTable.h
	$(CC) $(CFLAGS) ../KRW_Main/main.cpp -o $@

../KRW_ObjectFiles/symbolTableEntry.o: ../KRW_Objects/symbolTableEntry.cpp ../KRW_Objects/symbolTableEntry.h
	$(CC) $(CFLAGS) ../KRW_Objects/symbolTableEntry.cpp -o $@

../KRW_ObjectFiles/symbolTable.o: ../KRW_Objects/symbolTable.cpp ../KRW_Objects/symbolTable.h ../KRW_Objects/symbolTableEntry.h
	$(CC) $(CFLAGS) ../KRW_Objects/symbolTable.cpp -o $@

clean:
	rm -rf ../KRW_ObjectFiles/*.o ../KRW_ObjectFiles/krwFrontEnd
