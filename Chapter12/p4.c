#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MSG_LEN 80
int main(void)
{
	char msg[MSG_LEN], *p, ch;
	printf("Enter a message: \n");
	p = msg;
	while((ch = tolower(getchar())) != '\n' && p < msg + MSG_LEN)
	{
		if(isalpha(ch))
			*p++ = ch;
	}
	p--;
	for(char * m = msg; m < p; m++, p--)
	{
		if (*p != *m)
		{
			printf("Not a palindrom\n");
			return 0;
		}
	}
	printf("Palindrome\n");
	return 0;
}

