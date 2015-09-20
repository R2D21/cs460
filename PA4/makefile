# This is the makefile for the generation of a calculator program using both
# Flex (for generating the lexical analyzer) and Bison (for creating the 
# parser).

# A g++ compiler is used so that both Flex and Bison output C++ code instead
# of C code.  
CC = g++ 
FLEX = flex
BISON = bison
LIBS = -L/usr/local/lib -lfl

OBJS = lex.yy.o calc.tab.o

calc: $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS)

calc.tab.c: calc.y
	$(BISON) -d $<

lex.yy.c: calc.l calc.tab.c
	$(FLEX) $<

clean:
	-rm -f lex.yy.* calc.tab.* *.o calc