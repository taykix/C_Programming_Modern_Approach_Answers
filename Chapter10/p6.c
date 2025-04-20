#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100


int contents[STACK_SIZE];
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
void push(int i)
{
		if (is_full())
				printf("Expression is too complex\n");
		else
				contents[top++] = i;
}
int pop(void)
{
		if (is_empty())
				printf("Not enough operands in expression\n");
		else
				return contents[--top];
}

int main(void)
{
		char ch;
		ch = 'a';
		while (true)
		{
				printf("\nEnter an RPN Expression: ");
				while (ch != '\n')
				{
						scanf(" %c", &ch);
						if (isdigit(ch))
								push(ch - '0');
						else if (ch == '+')
								push(pop() + pop());
						else if (ch == '-')
						{
							int a = pop();
							int b = pop();
							push(b - a);
						}
						else if (ch == '*')
								push(pop() * pop());
						else if (ch == '/')
						{
							int a = pop();
							int b = pop();
								push(b / a);
						}
						else if (ch == '=')
						{
								printf("Value of expression: %d", pop());
								break;
						}
						else
						{
								printf("You entered not operand or operator.\nTerminating\n");
								exit(0);	
						}

				}
		}
}
