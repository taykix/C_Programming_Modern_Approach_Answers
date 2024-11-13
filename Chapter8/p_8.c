#include <stdio.h>


int main(void)
{
    int array[5][5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter notes of the quiz grades of student %d: ", i + 1);
        for (int j = 0; j < 5; j++)
        {
            scanf(" %d", &array[i][j]);
        }
    }

    printf("Total score for: \n");
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += array[i][j];
        }
        printf("Student %d: total: %d avarage score: %f\n", i, sum, (float)sum/5);
        sum = 0;
    }

    int high_score, low_score;
    sum = 0;
    printf("\nAvarage scores for: \n");
    for (int i = 0; i < 5; i++)
    {
        high_score = -1;
        low_score = 101;
        for (int j = 0; j < 5; j++)
        {
            if (array[j][i] > high_score)
                high_score = array[j][i];
            if (array[j][i] < low_score)
                low_score = array[j][i];
            sum += array[j][i];
        }
        printf("Quiz %d: avarage :%f low score: %d high score: %d\n",i, (float)sum/5, low_score, high_score);
        sum = 0;
    }
    
    
    return 0;
}