#include <stdio.h>

int main(void)
{
	int ch;
    int i;
    char num[15];
	printf("Enter phone number: ");

    i = 0;
	while (i < 15)
	{
		ch = getchar();
		if (ch == '\n')
			break;

		if ( ch == 'A' || ch == 'B' || ch == 'C')
			num[i] = '2';
		else if ( ch == 'D' || ch == 'E' || ch == 'F')
			num[i] = '3';
		else if ( ch == 'G' || ch == 'H' || ch == 'I')
			num[i] = '4';
		else if ( ch == 'J' || ch == 'K' || ch == 'L')
			num[i] = '5';
		else if ( ch == 'M' || ch == 'N' || ch == 'O')
			num[i] = '6';
		else if ( ch == 'P' || ch == 'R' || ch == 'S')
			num[i] = '7';
		else if ( ch == 'T' || ch == 'U' || ch == 'V')
			num[i] = '8';
		else if ( ch == 'W' || ch == 'X' || ch == 'Y')
			num[i] = '9';
		else
			num[i] = ch;
        i++;
	}

    for (int j = 0; j < i; j++)
    {
        printf("%c", num[j]);
    }
    printf("\n");
    

    return 0;
}
