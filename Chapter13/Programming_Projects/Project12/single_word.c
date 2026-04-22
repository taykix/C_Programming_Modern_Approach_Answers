#include <stdio.h>

#define MAX_WORD_COUNT 30
#define MAX_WORD_LEN 20

int main ()
{
    char ch, terminating_char;
    char array[MAX_WORD_COUNT][MAX_WORD_LEN];
    int i, word_count, j;

    printf("Enter a sentence: ");

    word_count = 1;
    i = 0;
    j = 0;
    while (1)
    {
        ch = getchar();
        if (ch == '!' || ch == '.' || ch == '?')
        {
            array[i][j] = '\0';
            terminating_char = ch;
            break;
        }
        if(ch == ' ')
        {
            array[i][j] = '\0';
            word_count++;
            if(i < MAX_WORD_COUNT - 1)
                i++;
            else
            {
                printf("You have exeed max word count! \n");
                return(1);
            }
            j = 0;
            continue;
        }
        if(j < MAX_WORD_LEN - 1)
            array[i][j++] = ch;
        else
        {
            printf("You have exeed max word length!\n");
            return(1);
        }
    }
    while(--word_count > -1)
    {
        printf("%s", array[word_count]);
        if (word_count > 0)
            printf(" ");
    }
    printf("%c\n", terminating_char);
    return 0;
}
