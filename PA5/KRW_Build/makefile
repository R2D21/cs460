# Name: Renee Iinuma, Kyle Lee, and Wesley Kepke
# File: KRW_Makefile
# Created: September 28, 2015
# Last Modified: September 29, 2015

# This is the makefile for the front end of our ANSI C compiler.

# Macros
OBJS = ../KRW_ObjectFiles/main.o ../KRW_ObjectFiles/symbolTable.o \
	../KRW_ObjectFiles/symbolTableEntry.o ../KRW_Lexer/lex.yy.o \
	../KRW_Parser/cParser.tab.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
FLEX = flex
BISON = bison
LIBS = -L/usr/local/lib -lfl

# Targets, dependencies, and rules
all: ../KRW_CompilerExecutable/krwCompiler

../KRW_CompilerExecutable/krwCompiler: $(OBJS)
	$(CC) $(LFLAGS) -o $@ $(OBJS) $(LIBS)

../KRW_ObjectFiles/main.o: ../KRW_Main/main.cpp 
	$(CC) $(CFLAGS) ../KRW_Main/main.cpp -o $@ 

../KRW_ObjectFiles/symbolTableEntry.o: ../KRW_Classes/symbolTableEntry.cpp \
					../KRW_Classes/symbolTableEntry.h
	$(CC) $(CFLAGS) ../KRW_Classes/symbolTableEntry.cpp -o $@

../KRW_ObjectFiles/symbolTable.o: ../KRW_Classes/symbolTable.cpp ../KRW_Classes/symbolTable.h \
				../KRW_Classes/symbolTableEntry.h
	$(CC) $(CFLAGS) ../KRW_Classes/symbolTable.cpp -o $@

../KRW_Parser/cParser.tab.c: ../KRW_Parser/cParser.y
	$(BISON) -d $< 
	mv cParser.tab.h ../KRW_Parser/
	mv cParser.tab.c ../KRW_Parser/

../KRW_Lexer/lex.yy.c: ../KRW_Lexer/cLexer.l ../KRW_Parser/cParser.tab.c
	$(FLEX) $< 
	mv lex.yy.c ../KRW_Lexer/

clean:
	rm -rf  ../KRW_CompilerExecutable/krwCompiler \
		../KRW_Parser/cParser.tab.* ../KRW_Lexer/lex.yy.* \
		../KRW_ObjectFiles/*.o
