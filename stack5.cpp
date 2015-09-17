#include <iostream>
using namespace std;

#define SIZE 10

// Declare a stack class for characters
class stack
{
	char s[SIZE]; // holds the stack
	int top; // index of top of stack

public:
	void init(); // initialize stack
	void push(char c); // push character on stack
	char pop(); // pop character from stack
	bool isEmpty(); // check the stack is empty or not
};

// Initialize the stack
void stack::init()
{
	top = 0;
}

// Push a character.
void stack::push(char c)
{
	if(top == SIZE)
	{
		cout << "Stack is full";
		return;
	}
	s[top++] = c;
}

// Pop a character
char stack::pop()
{
	if(top == 0)
	{
		cout << "Stack is empty";
		return 0; // return null on empty stack
	}
	return s[--top];
}

// Return whether the stack is empty
bool stack::isEmpty()
{
    return top == 0;
}

int main()
{
	stack s1, s2; // create two stacks

	// initialize the stacks
	s1.init();
	s2.init();

	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');

    while(!s1.isEmpty())
	{
		cout << "Pop s1: " << s1.pop() << "\n";
	}

    while(!s2.isEmpty())
	{
		cout << "Pop s2: " << s2.pop() << "\n";
	}

	return 0;
}
