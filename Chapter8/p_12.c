#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	char ch;
    int value;
	printf("Enter a word: ");

    value = 0;
	while (1)
	{
		ch = getchar();
		if (ch == '\n')
			break;
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            ch = toupper(ch);
            value += values[ch - 'A'];
        }
	}
	printf("Scrabble value: %d\n", value);

	return 0;
}
