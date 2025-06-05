#include <stdio.h>

int main(void)
{
	char chr;
	int counter = 0;
	char * array;
	printf("Enter a mesage: ");
	while ((chr = getchar()) != '\n')
		{
			*array++ = chr;
			counter++;
		}
	while(counter >= 0)
	{
		printf("%c", *array--);
		counter--;
	}
	return 0;
}
