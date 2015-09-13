#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <stack>
#include <string>

using namespace std;

void add(stack<int>& theStack);
void sub(stack<int>& theStack);
void mul(stack<int>& theStack);
void div(stack<int>& theStack);
void prt(stack<int>& theStack);
void stop();

int main ()
{
	string command;
	stack<int> myStack;
	ifstream myCommands("Commands.txt");
	if (myCommands.is_open())
	{
		while (getline (myCommands, command))
		{
	       if (command == "ADD")
			    add(myStack);
			else if (command == "SUB")
				sub(myStack);
			else if (command == "MUL")
				mul(myStack);
			else if (command == "DIV")
				div(myStack);
            else if (command == "PRT")
                prt(myStack);
            else if (command == "STOP")
                stop();
            else
                myStack.push(strtol(command.c_str(), NULL, 0));
		}
		myCommands.close();
	}

    return 0;
}

//function declarations
void add(stack<int>& aStack)
{
	int x = aStack.top();
	aStack.pop();
	int y = aStack.top();
 	aStack.pop();

    aStack.push(x + y);
}
void sub(stack<int>& aStack)
{
    int	x = aStack.top();
	aStack.pop();
	int y = aStack.top();
	aStack.pop();

	aStack.push(x - y);
}
void mul(stack<int>& aStack)
{
	int x= aStack.top();
 	aStack.pop();
	int y = aStack.top();
	aStack.pop();
    
    aStack.push(x * y);
}
void div(stack<int>& aStack)
{
	int x = aStack.top();
	aStack.pop();
	int y = aStack.top();
	aStack.pop();
    
    aStack.push(x / y); 
}

void prt(stack<int>& aStack)
{
    cout << aStack.top() << endl;
}

void stop()
{
    cin.ignore();
}
