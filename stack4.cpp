#include <iostream>

#define SIZE 10

class stack {
    char s[SIZE];
    int top;
public:
    void init()
    {
        top = 0;
    }

    // Push a character
    void push(char c)
    {
        if(top == SIZE)
        {
            std::cout << "Stack is full";
            return;
        }
        s[top++] = c;
    }

    // Pop a character
    char pop()
    {
        if(top == 0)
        {
            std::cout << "Stack is empty";
            return 0; // return null on empty stack
        }
        return s[--top];
    }

    bool isEmpty()
    {
        return top == 0;
    }

};

int main(void)
{
	int i;

	// initialize the stack
	stack st;

    st.init();

	st.push('a');
	st.push('b');
	st.push('c');

    while(!st.isEmpty())
	{
		std::cout << "Pop stack: " << st.pop() << std::endl;
	}

	return 0;
}
