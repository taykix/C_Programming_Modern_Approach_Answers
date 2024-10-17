#include <stdio.h>

int main(void)
{
	unsigned int lengh;

	lengh = 0;
	char ch;
	printf("Enter a message: ");
	do
	{
		scanf("%c", &ch);
		lengh++;
	} while (ch != '\n');

	printf("Your message was %d character(s) long.", lengh - 1);
	return 0;
}
