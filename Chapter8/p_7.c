#include <stdio.h>


int main(void)
{
    int array[5][5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf(" %d", &array[i][j]);
        }
    }

    printf("Row totals: ");
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += array[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    sum = 0;
    printf("\nColumn totals: ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += array[j][i];
        }
        printf("%d ", sum);
        sum = 0;
    }
    
    
    return 0;
}
