#include <stdio.h>
#include <ctype.h>

#define STR_LEN 128


int compute_vowel_count(const char *sentence);

int main(void)
{
	int value = 0;
  	char i, ch;
    char buffer[STR_LEN];

	printf("Enter a sentence: ");
    i = 0;
	while (1)
	{
		ch = getchar();
		if (ch == '\n')
			break;
		ch = toupper(ch);
        buffer[i] = ch;
        i++;
	}
    buffer[i] = '\0';
    value = compute_vowel_count(buffer);
	printf("Your sentence contains %d vowels.", value);

	return 0;
}

int compute_vowel_count(const char *sentence)
{
    char ch;
    int value, i;

    i = 0;
    value = 0;
    while(sentence[i])
    {
        ch = sentence[i];
		if ( ch == 'A' || ch == 'E' || ch == 'I'
			|| ch == 'O' || ch == 'U' )
			value++;
        i++;
    }
    
    return value;
}
