#include <stdio.h>

int main ()
{
    char ch, terminating_char;
    char *array;
    int i, word_count;

    printf("Enter a sentence: ");

    word_count = 1;
    i = 0;
    while (1)
    {
        ch = getchar();
        if (ch == '!' || ch == '.' || ch == '?')
        {
            terminating_char = ch;
            break;
        }

        *(array + i++) = ch;
    }
    *(array + i) = terminating_char;

    for (int j = i; j >= 0; j--)
    {
        if (*(array + j) == ' ')
        {
            for(int k = j + 1; k <= i; k++)
            {
                if (*(array + k) != ' ' && *(array + k) != terminating_char)
                    printf("%c", array[k]);
                else if (*(array + k) == ' ' ||*(array + k) == terminating_char)
                {
                    printf(" ");
                    break;
                }
            }
        }

        if (j == 0)
        {
            for(int k = 0; k < i; k++)
            {
                if (*(array + k) != ' ')
                    printf("%c", *(array + k));
                else
                    break;
            }
            printf("%c\n", terminating_char);
            break;
        }
    }
        
    return 0;
}
