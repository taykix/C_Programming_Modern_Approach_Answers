#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_LEN 100

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
	int i;
    char ch, word1[MAX_LEN], word2[MAX_LEN];

    printf("Enter first word: ");
	scanf("%99s", word1);
    printf("Enter second word: ");
	scanf("%99s", word2);
    
	if (are_anagrams(word1, word2))
        printf("The words are anagrams.\n");		
    else
        printf("The words are not anagrams.\n");

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int alph_counter[26] = {0};
    
	while (*word1)
    {
        alph_counter[tolower(*word1++) - 'a']++;
    }
	while (*word2)
	{
		alph_counter[tolower(*word2++) - 'a']--;
	}

    for (int i = 0; i < 26; i++)
    {
        if (alph_counter[i] != 0)
        {
            return false;
        } else if (i == 25)
        {
			return true;
        }
    }
}
