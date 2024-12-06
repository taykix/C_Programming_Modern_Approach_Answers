#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int alph_counter[26] = {0};
    char ch;

    printf("Enter first word: ");

    while (1) 
    {
        ch = getchar();
        if (ch == '\n')
        {
            break;
        }
        ch = tolower(ch);

        alph_counter[ch - 'a']++;
    }

    printf("Enter second word: ");

    while (1) 
    {
        ch = getchar();
        if (ch == '\n')
        {
            break;
        }
        ch = tolower(ch);

        alph_counter[ch - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alph_counter[i] != 0)
        {
            printf("The words are not anagrams.\n");
            break;
        } else if (i == 25)
        {
            printf("The words are anagrams.\n");
        }
    }
    
    

    return 0;
}
