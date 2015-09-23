# Makefile for the symbol table component of the compiler.
# Author: Wesley Kepke
# Last Modified: September 22, 2015

CC = g++
FLEX = flex
LIBS = -L/usr/local/lib -lfl
OBJS = lex.yy.o 

lexer: $(OBJS)
	$(CC) -o $@ $(OBJS) 

lex.yy.c: calc.l 
	$(FLEX) $<

clean:
	-rm -f lex.yy.* *.o lexer
