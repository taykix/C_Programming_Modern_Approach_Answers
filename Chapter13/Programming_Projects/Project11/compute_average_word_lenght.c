#include <stdio.h>

#define MAX_LENGTH 1024

double compute_average_word_length(const char *sentence);

int main(void)
{
	char word[MAX_LENGTH], ch;
	int i;

	printf("Enter a sentence: ");
	
	i = 0;
	ch = getchar();
	while (ch != '\n' && i < 1023)
	{
		word[i++] = ch;
		ch = getchar();
	}
	word[i] = '\0';
	printf("average wod length: %f", compute_average_word_length(word));

	return 0;
}


double compute_average_word_length(const char *sentence)
{
	int word_count, letter_count;

	if(*sentence == '\0')
		return 0;
	
	word_count = 1;
	letter_count = 0;
	
	while(*sentence != '\0')
	{
		if (*sentence == ' ')
		{
			word_count++;
		} else
		{
			letter_count++;
		}
		*sentence++;
	}

	return((double)letter_count / word_count);

}
