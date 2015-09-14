#RPNcalculator
#1 + ((3 * 4) + (4 / 2)) / 7
import sys

#I/O - performs two actions, input and output. On input, we read the input file, and decides
#	if the line is a number or command. On output, it deals with the "PRT" command.
def inputOutput(cmd):
	line = "" #filler statment so that I could pass the current instruction line to the memory function from control
	if cmd == "input":
		input_queue = open("Commands.txt", 'r').readlines()
		temp = []
		for i in input_queue:
			temp.append(i.rstrip())  #rstrip to remove the next line character
		input_queue = temp  #overwrite input_queue with a copy with now new line characters
		return input_queue
	elif cmd == "output":
		print memory("pop", line)

#Arithmetic - Performs the required mathematical operations (not "PRT" or "STOP")
def arithmetic(cmd, num1, num2):
	if cmd == "ADD":
		result = num2 + num1
	elif cmd == "SUB":
		result = num2 - num1
	elif cmd == "MUL":
		result = num2 * num1
	elif cmd == "DIV":
		result = num2 / num1
	return result

#Stack - implements the "memory" of this mahcine. You cna limit the possible size of this stack. Your need
#	to implement only "push" and "pop" operations
def memory(cmd, line):
	if cmd == "push":
		stack.append(int(line))
	elif cmd == "pop":
		return stack.pop()

#Control - the main routine that controls the operation of the machine. Also handles the "STOP" command.
def control():
	input_queue = inputOutput("input") #load input file into list

	for line in input_queue: #loop through list of commands
		if line[0].isalpha(): #if command
			arithmitic_cmds = ["ADD", "SUB", "MUL", "DIV"]
			if line in arithmitic_cmds: #if arithemitic command
				stack.append(arithmetic(line, memory("pop", line), memory("pop", line)))
			elif line == "PRT":
				inputOutput("output")
			elif line == "STOP":
				sys.exit
			print line, stack
		else: #if number
			memory("push", line)
			print line, stack

stack = []
control()