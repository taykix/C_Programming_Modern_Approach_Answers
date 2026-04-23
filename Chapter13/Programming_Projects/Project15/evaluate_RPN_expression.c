#include <stdbool.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100


int contents[STACK_SIZE];
int top = 0;

int evaluate_RPN_expression(const char *expression);

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
		char expression[100];		
		char ch;
		int i;

		ch = 'a';
		i = 0;
		printf("\nEnter an RPN Expression: ");
		while(1){
			scanf(" %c", &ch);
			if(ch == '=')
			{
				expression[i] = ch;
				break;
			}
			expression[i++] = ch;
		}
		printf("Value of expression: %d", evaluate_RPN_expression(expression));
}

int evaluate_RPN_expression(const char * expression)
{
		char ch;
		while (ch = *expression++)
		{
				if (ch != '\n')
				{
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
							return pop();
						}
						else
						{
								printf("You entered not operand or operator.\nTerminating\n");
								exit(0);	
						}
				}
		}
}
