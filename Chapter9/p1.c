#include <stdio.h>
#include <limits.h>
#define MAX_LEN 100

void selection_sort(int array[], int n)
{
	int	temp, max;
	
	if (n == 0) return;

	max = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] > array[max])
			max = i;
	}
	temp = array[max];
	array[max] = array[n - 1];
	array[n - 1] = temp;

	selection_sort(array, n - 1);

}

int main(void)
{
	int length, scanned, c;
	int array[MAX_LEN];

	length = 0;
	printf("Enter list of integers:\n");
	while(length < MAX_LEN)
	{
		
		scanf(" %d", &array[length]);
		if((c = getchar()) == '\n')
			break;
		ungetc(c, stdin);
		length++;
	}

	selection_sort(array, length);

	for(int i = 0; i < length; i++)
	{
		printf("%d ", array[i]);
		printf("\n");
	}
	return 0;
}
