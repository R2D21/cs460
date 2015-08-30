# Name: Wesley Kepke
# Class: CS 460
# Assignment: Write the assembler for the Hello World problem from PA1.
# Last Modified: August 30, 2015
# Due Date: September 2, 2015

# variable declarations
	.data
helloWorld:	.asciiz	"Hello, World!\n"

# text/code segment
	.text
main:
li $v0, 4		# loading a value of 4 into $v0 will print a string when "syscall" is used 
la $a0, helloWorld	# load the address of our "Hello, World!" string
syscall 
li $v0, 0		# loading a value of 0 into $v0 will terminate execution when "syscall" is used 
syscall
