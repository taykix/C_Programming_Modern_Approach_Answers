#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_palindrome(const char * message);

int main(void)
{
	char message[100];
	char ch;
	int i;
	i = 0;
	printf("Enter a message: \n");
	while((ch = getchar()) != '\n')
	{
		if(!isalpha(ch))
			continue;
		message[i++] = tolower(ch);
	}
	message[i] = '\0';

	if (is_palindrome(message))
		printf("This is Palindrome ladies and gentlamen. Trust me!\n");
	else
		printf("This is not palindrome bro, trust me.\n");

	return 0;
}


bool is_palindrome(const char * message)
{
	const char * start;
	const char * end;
	
	start = message;
	end = message + strlen(message) - 1;
	while(end > start)
	{
		if (*start != *end)
		{
			return false;
		}
		start++;
		end--;
	}
	return true;
}
