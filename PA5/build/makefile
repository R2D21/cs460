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
FLEX = flex
BISON = bison
LIBS = -L/usr/local/lib -lfl
OBJS = ../lexer/lex.yy.o ../parser/cParser.tab.o ../main/main.o \
	../classes/symbolTable.o ../classes/symbolTableEntry.o \

# Targets, dependencies, and rules
all: ../bin/krwCompiler

../bin/krwCompiler: $(OBJS)
	$(CC) $(LFLAGS) -o $@ $(OBJS) $(LIBS)

../main/main.o: ../main/main.cpp
	$(CC) $(CFLAGS) ../main/main.cpp -o $@  

../classes/symbolTableEntry.o: ../classes/symbolTableEntry.cpp \
				../classes/symbolTableEntry.h
	$(CC) $(CFLAGS) $< -o $@

../classes/symbolTable.o: ../classes/symbolTable.cpp \
				../classes/symbolTable.h \
				../classes/symbolTableEntry.h
	$(CC) $(CFLAGS) $< -o $@

../lexer/lex.yy.c: ../lexer/cLexer.l ../parser/cParser.tab.c
	$(FLEX) $<
	mv lex.yy.c ../lexer/

../parser/cParser.tab.c: ../parser/cParser.y
	$(BISON) -d $<
	mv cParser.tab.h ../parser/
	mv cParser.tab.c ../parser/

clean:
	rm -rf $(OBJS) ../parser/cParser.tab.* ../lexer/lex.yy.* \
		../bin/krwCompiler
