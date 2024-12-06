#include <stdio.h>

int main(void)
{
    int array[99][99] = {0};
    int size, start, num;
    int i, j, counter;
    num = 1;

    printf("This program creates a magic square of specified size.\n");
    printf("The size must be an odd number between 1 and 99\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    start = size / 2;
    counter = 0;
    i = 0;
    j = start;
    while (counter < size * size)
    {
        array[i < 0 ? size + i : i][j > size ? size - j : j] = num++;
        if (counter > 0 && counter % 5 == 4)
        {
            i++;
        } else
        {
            i--;
            j++;
        }
        if (i <= -size)
            i = i + size;
        if (j >= size)
            j = size - j;
        counter++;
    }


    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}