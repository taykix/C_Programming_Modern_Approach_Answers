#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int value = 0;
	char ch;
	printf("Enter a sentence: ");

	while (1)
	{
		ch = getchar();
		if (ch == '\n')
			break;
		ch = toupper(ch);
		if ( ch == 'A' || ch == 'E' || ch == 'I'
			|| ch == 'O' || ch == 'U' )
			value++;
	}
	printf("Your sentence contains %d vowels.", value);

	return 0;
}
