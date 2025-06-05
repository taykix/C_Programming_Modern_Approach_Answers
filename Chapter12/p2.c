#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	char * start;
	char * end;
	char ch;
	int counter = 0;		
	printf("Enter a message: \n");
	while((ch = getchar()) != '\n')
	{
		if(!isalpha(ch))
			continue;
		*end++= tolower(ch);
		counter++;
	}
	start = end - counter;
	end--;
	while(counter-- > 0)
	{
		if (*start != *end)
		{
			printf("Not a palindrome.\n");
			exit(0);
		}
		start++;
		end--;
	}
	printf("Palindrome\n");
	return 0;
}

