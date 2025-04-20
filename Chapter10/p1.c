#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(char i)
{
	if (is_full())
	{
		printf("stack_overflow()\n");
		exit(EXIT_FAILURE);
	}
	else
		contents[top++] = i;
}

char pop(void)
{
	if (is_empty())	
	{
		printf("stack_underflow()\n");
		exit(EXIT_FAILURE);
	}

	else
		return contents[--top];
}

int main(void)
{
	char ch;
	printf("Enter parantheses and/or braces: ");
	while ( (ch = getchar()) != '\n')
	{
		if (ch == '(')
			push('(');
		else if (ch == '{')
			push('{');
		else if (ch == ')')
		{
			if(pop() != '(')
			{
				printf("NO!!!\n");
				exit(EXIT_FAILURE);
			}
		}
		else if (ch == '}')
		{
			if (pop() != '{')
			{
				printf("NO!!!\n");
				exit(EXIT_FAILURE);	
			}
		}
		
	}
	if (top =! 0)
		printf("Parantheses ARE NOT NESTED PROPERLY\n");
	else
		printf("Parantheses/braces are nested properly\n");
	return 0;
}
