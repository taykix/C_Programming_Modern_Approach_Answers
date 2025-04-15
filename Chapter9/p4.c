#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26])
{
	char ch;

    while (1) 
    {
        ch = getchar();
        if (ch == '\n')
        {
            break;
        }
        ch = tolower(ch);

        counts[ch - 'a']++;
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (counts1[i] - counts2[i] != 0)
            return false;
    }
 	return true;
}

int main(void)
{
    int alph_counter1[26] = {0};	
    int alph_counter2[26] = {0};
 	printf("Enter first word: ");
	read_word(alph_counter1);
    printf("Enter second word: ");
    read_word(alph_counter2);
    if (equal_array(alph_counter1, alph_counter2))
   		printf("Equal\n");
	else
		printf("Not Equal\n");
    return 0;
}
