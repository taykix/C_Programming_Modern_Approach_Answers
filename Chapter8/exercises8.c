#include <stdio.h>

typedef int bool;
#define TRUE  1
#define FALSE 0

int main(void)
{
    //Exercise 1
    //Its hard to check somebody that reads the program if the type of the arrays elements match with the given type. Because of that
    // it is a better practice to use sizeof(a)/sizeog(a[0])

    //Exercise 2
    // array[dig - '0']

    //Exercise 3
    bool weekend[7] = {TRUE, FALSE, FALSE, FALSE, FALSE, FALSE, TRUE};

    //Exercise 4
    bool weekend_1[7] = {[0] = TRUE, [6] = FALSE};

    //Excercise 5
    printf("Exercises 5 ********************\n");
    int fib_numbers[40] = {[0] = 0, [1] = 1};
    int i = 2;

    while(i <= 40)
    {
        fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
        i++;
    }
    for (i = 0; i <= 40; i++)
    {
        printf("F%d = %d ", i, fib_numbers[i]);
    }

    //Excercise 6
    const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                                {0, 1, 1, 0, 0, 0, 0},
                                {[0] = 1, [1] = 1, [3] = 1, [4] = 1, [5] = 1},
                                {[0] = 1, [1] = 1, [2] = 1, [3] = 1, [6] = 1},
                                {[1] = 1, [2] = 1, [5] = 1, [6] = 1},
                                {[0] = 1, [2] = 1, [3] = 1, [5] = 1, [6] = 1},
                                {[0] = 1, [2] = 1, [3] = 1, [4] = 1, [5] = 1, [6] = 1},
                                {[0] = 1, [1] = 1, [2] = 1},
                                {1, 1, 1, 1, 1, 1, 1},
                                {1, 1, 1, 1, 0, 1, 1}};

    //Excercise 7
    // same with 6 but for one you can use {0, 1, 1} because other elements of the array will be initialize as 0's

    //Exercise 8
    #define DAYS 30
    #define HOURS 24
    int temperature_readings[DAYS][HOURS];

    //Exercise 9
    int sum = 0;
    for (int i = 0; i < DAYS; i++)
    {
        for (int j = 0; j < HOURS; j++)
        {
            sum += temperature_readings[i][j];
        }
    }
    float avarage = sum / DAYS * HOURS;
    printf("\n");
    //Exercise 10
    char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                            {'p', 'p', 'p', 'p', 'p','p', 'p', 'p'},
                            {' ', '*', ' ', '*', ' ', '*', ' ', '*'},
                            {'*', ' ', '*', ' ', '*', ' ', '*', ' '},
                            {' ', '*', ' ', '*', ' ', '*', ' ', '*'},
                            {'*', ' ', '*', ' ', '*', ' ', '*', ' '},
                            {'P', 'P', 'P', 'P', 'P','P', 'P', 'P'},
                            {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    for (size_t i = 0; i < 8; i++)
    {
        for (size_t j = 0; j < 8; j++)
        {
            printf("%c ", chess_board[i][j]);
            if (j == 7)
                printf("\n");
        }
        
    }
    printf("\n");
    //Excercise 11
    char checker_board[8][8];

    for (size_t i = 0; i < 8; i++)
    {
        for (size_t j = 0; j < 8; j++)
        {
            checker_board[i][j] = ((i + j) % 2 == 0 ? 'B' : 'R');
        }
        
    }

        for (size_t i = 0; i < 8; i++)
    {
        for (size_t j = 0; j < 8; j++)
        {
            printf("%c ", checker_board[i][j]);
            if (j == 7)
                printf("\n");
        }
        
    }

    return 0;
}

//First session 30:48 concentrated minutes.
//Second session 18:22 concentrated minutes.