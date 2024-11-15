#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char array[10][10] = {{'.'}};
    // Define an array with all English capital letters
    char capitalLetters[26];
    int cl = 0;
    int direction;

    srand((unsigned)time(NULL));
    
    // Fill the array with letters A to Z
    for (int i = 0; i < 26; i++) {
        capitalLetters[i] = 'A' + i;
    }

    //Fill the array with '.'
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            array[i][j] = '.';
        }
        
    }
    int i = 0;
    int j = 0;
    array[i][j] = capitalLetters[cl++];

    while (cl < 26)
    {
        direction = rand() % 4;

        if (!((i - 1 >= 0 && array[i - 1][j] == '.') ||  // UP
            (j + 1 < 10 && array[i][j + 1] == '.') ||  // RIGHT
            (i + 1 < 10 && array[i + 1][j] == '.') ||  // DOWN
            (j - 1 >= 0 && array[i][j - 1] == '.')))   // LEFT
        {
            break;
        }

        switch (direction)
        {
            //UP -i j
            case 0 :
                if ( (i - 1 >= 0 ) && array[i - 1][j] == '.')
                {
                    i = i - 1;
                    array[i][j] = capitalLetters[cl];
                    cl++;
                    break;
                } else {
                    continue;
                }
            //RIGHT i  j+
            case 1 :
                if ( (j + 1 < 10) && array[i][j + 1] == '.')
                {
                    j = j + 1;
                    array[i][j] = capitalLetters[cl];
                    cl++;
                    break;
                } else {
                    continue;
                }
            // DOWN +i j
            case 2 :
                if ( (i + 1 < 10 ) && array[i + 1][j] == '.')
                {
                    i = i + 1;
                    array[i][j] = capitalLetters[cl];
                    cl++;
                    break;
                } else {
                    continue;
                }
            //LEFT i j-
            case 3 :
                if ( (j - 1 >= 0) && array[i][j - 1] == '.')
                {
                    j = j - 1;
                    array[i][j] = capitalLetters[cl];
                    cl++;
                    break;
                } else {
                    continue;
                }
            default : 
                break;
        }
    }
    //Print map
    printf("\n---------------------------\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c", array[i][j]);
            if (j == 9)
                printf("\n");
        }
        
    }
    

    return 0;
}