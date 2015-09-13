#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <string>
#include <cstdlib>
using namespace std;

int add(stack< int, vector<int> >&);
int sub(stack< int, vector<int> >&);
int mul(stack< int, vector<int> >&);
int div(stack< int, vector<int> >&);

main ()
{
	string command;
	stack< int, vector<int> > myStack;
	ifstream myCommands("Commands.txt");
	if (myCommands.is_open())
	{
		while (getline (myCommands, command))
		{
			if (strtol(command.c_str(), NULL, 0))
				myStack.push(strtol(command.c_str(), NULL, 0));
			else if (command == "ADD")
				myStack.push(add(myStack));
			else if (command == "SUB")
				myStack.push(sub(myStack));
			else if (command == "MUL")
				myStack.push(mul(myStack));
			else if (command == "DIV")
				myStack.push(div(myStack));
		}
		myCommands.close();
	}

	while (!myStack.empty())
	{
		cout << myStack.top() << endl;
		myStack.pop();
	}
	
	cout << "The stack is now empty.";
	return 0;
}

int add(stack< int, vector<int> >& aStack)
{
	int x, y;
	x = aStack.top();
	aStack.pop();
	y = aStack.top();
 	aStack.pop();
	cout << "Adding" << x << " and " << y << " and returning " << x+y << endl;
	return x + y;
}
int sub(stack< int, vector<int> >& aStack)
{
	int x, y;
	x = aStack.top();
	aStack.pop();
	y = aStack.top();
	aStack.pop();
	cout << "Subtracting " << y << " from " << x;
	cout << " and returning " << x-y << endl;
	return x - y;
}
int mul(stack< int, vector<int> >& aStack)
{
	int x, y;
	x= aStack.top();
 	aStack.pop();
	y = aStack.top();
	aStack.pop();
	cout << "Multiplying " << x << " and ";
	cout << y << " and returning " << x*y << endl; 
	return x * y;
}
int div(stack< int, vector<int> >& aStack)
{
	int x, y;
	x = aStack.top();
	aStack.pop();
	y = aStack.top();
	aStack.pop();
	cout << "Dividing " << x << " by " << y << " and returning " << x/y << endl;
	return x/y; 
}
