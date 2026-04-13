/* This program keeps track of dictionary order of the entered strings */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int accept_input(char * smalleset_word, char * largest_word);
int compare_words(char * smallest_word, char * larges_word, char * read_word);

int main(void)
{
    char smallest_word[21];
    char largest_word[21];

    strcpy(smallest_word,"");
    strcpy(largest_word,"");
    
    while (accept_input(smallest_word, largest_word) != 0)
    ;

    printf("Smallest word is: %s\n", smallest_word);
    printf("Largest word is: %s\n", largest_word);
    
    return 0;
}

int accept_input(char * smallest_word, char * largest_word)
{
    char read_word[21];
    int i;

    printf("Enter word: ");
    i = 0;
    while (i < 21)
    {
        read_word[i] = getchar();
        if (read_word[i] == '\n')
            break;
        i++;
    }

    read_word[++i] = '\0';
    return compare_words(smallest_word, largest_word, read_word);
}


int compare_words(char * smallest_word, char * largest_word, char * read_word)
{
    if (strcmp(smallest_word, "") == 0 || strcmp(read_word, smallest_word) < 0)
        strcpy(smallest_word, read_word);
    if (strcmp(largest_word, "") == 0 || strcmp(largest_word, read_word) < 0)
        strcpy(largest_word, read_word);
    if (strlen(read_word) == 5)
        return 0;
    return 1;
}
