#include <stdio.h>

int main(void)
{
	int ch;
	printf("Enter phone number: ");

	while (1)
	{
		ch = getchar();
		if (ch == '\n')
			break;

		if ( ch == 'A' || ch == 'B' || ch == 'C')
			printf("%d", 2);
		else if ( ch == 'D' || ch == 'E' || ch == 'F')
			printf("%d", 3);
		else if ( ch == 'G' || ch == 'H' || ch == 'I')
			printf("%d", 4);
		else if ( ch == 'J' || ch == 'K' || ch == 'L')
			printf("%d", 5);
		else if ( ch == 'M' || ch == 'N' || ch == 'O')
			printf("%d", 6);
		else if ( ch == 'P' || ch == 'R' || ch == 'S')
			printf("%d", 7);
		else if ( ch == 'T' || ch == 'U' || ch == 'V')
			printf("%d", 8);
		else if ( ch == 'W' || ch == 'X' || ch == 'Y')
			printf("%d", 9);
		else
			printf("%c", ch);

	}


}
