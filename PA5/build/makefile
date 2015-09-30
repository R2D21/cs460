# Name: Renee Iinuma, Kyle Lee, and Wesley Kepke
# File: KRW_Makefile
# Created: September 28, 2015
# Last Modified: September 29, 2015

# This is the makefile for the front end of our ANSI C compiler.

# Macros
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
FLEX = flex
BISON = bison
LIBS = -L/usr/local/lib -lfl
OBJS = ../lexer/lex.yy.o ../parser/cParser.tab.o ../objectFiles/main.o

# Targets, dependencies, and rules
all: ../bin/krwCompiler

../bin/krwCompiler: $(OBJS)
	$(CC) $(LFLAGS) -o $@ $(OBJS) $(LIBS)

../objectFiles/main.o: ../main/main.cpp
	$(CC) $(CFLAGS) ../main/main.cpp -o $@  

lex.yy.c: ../lexer/cLexer.l ../parser/cParser.tab.c
	$(FLEX) $<
	mv lex.yy.c ../lexer/

cParser.tab.c: ../parser/cParser.y
	$(BISON) -d $<
	mv cParser.tab.h ../parser/
	mv cParser.tab.c ../parser/

clean:
	rm -rf $(OBJS) ../parser/cParser.tab.* ../lexer/lex.yy.*