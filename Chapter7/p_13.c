#include <stdio.h>

int main(void)
{
	int word_count, letter_count;
	char ch;

	word_count = 1;
	letter_count = 0;

	printf("Enter a sentence: ");

	ch = getchar();
	while (ch == ' ')
		ch = getchar();

	while(ch != '\n')
	{
		if (ch == ' ')
		{
			word_count++;
		} else
		{
			letter_count++;
		}
		ch = getchar();
	}

	printf("Avarage word length: %.1f", (float)letter_count / word_count);

	return 0;
}
