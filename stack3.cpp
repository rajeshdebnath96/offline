#include <stdio.h>

#define SIZE 10

struct stack {
    char s[SIZE];
    int top;

    void init()
    {
        top = 0;
    }

    // Push a character
    void push(char c)
    {
        if(top == SIZE)
        {
            printf("Stack is full");
            return;
        }
        s[top++] = c;
    }

    // Pop a character
    char pop()
    {
        if(top == 0)
        {
            printf("Stack is empty");
            return 0; // return null on empty stack
        }
        return s[--top];
    }

    int isEmpty()
    {
        return top == 0;
    }

};

int main(void)
{
	int i;

	// initialize the stack
	struct stack st;

    st.init();

	st.push('a');
	st.push('b');
	st.push('c');

    while(!st.isEmpty())
	{
		printf("Pop stack: %c\n", st.pop());
	}

	return 0;
}
