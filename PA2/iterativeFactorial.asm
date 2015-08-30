# Name: Wesley Kepke
# Class: CS 460
# Assignment: Write the assembler for the iterative factorial problem from PA1.
# Last Modified: August 30, 2015
# Due Date: September 2, 2015

# variable declarations
	.data
promptUser:	.asciiz "Enter a number to calculate the factorial: " 
displayResult:	.asciiz "The factorial result is: "
userInput:	.word	4 # a 4 byte (32 bit) location in memory to store the user input
result:		.word	4 # a 4 byte (32 bit) location in memory to store the result

# text/code segment
	.text
main: 
li $v0, 4		# loading a value of 4 into $v0 will print a string when "syscall" is used
la $a0, promptUser	# load the address of our string to prompt the user
syscall 

li $v0, 5		# loading a value of 5 into $v0 will read in an integer as input
syscall 		# user input is placed in register $v0
sw $v0, userInput	# assign the user input to the allocated memory 
la $t0, userInput	# assign the address of the user input into a temporary register
lw $t1 0($t0)		# assign the numerical value of the user input into a temporary register
li $t2, 1		# load a value of 1 into a temporary register (used in "loop")
li $t3, 1		# load a value of 1 into another temporary register (used in "loop")

loop:
bge $t2, $t1, endProgram	# exit loop if we have completed the factorial calculation
				# i.e., exit if our multiplier index is greater than or equal to 
				# the user input
addi $t2, $t2, 1		# update our multiplier index
mult $t3, $t2			# multiply the appropriate numbers in the factorial sequence
mflo $t3			# move the result of the multiplication into a temporary register
b loop				# branch back to the start of our "loop" for further processing 
	
endProgram:
la $t7, result		# load address of where the result is to be stored
sw $t3, 0($t7)		# store the factorial value in the allocated memory position
li $v0, 4		# prepare to output the result string
la $a0, displayResult	# load the address of the result string
syscall			# print the result string 
li $v0, 1		# prepare to output the integer result
lw $a0, 0($t7)		# load the result into the appropriate register
syscall			# print the result	
li $v0, 10		# prepare to terminate the program
syscall			# end the program 