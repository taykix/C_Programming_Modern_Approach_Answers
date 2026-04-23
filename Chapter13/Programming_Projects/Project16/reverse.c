#include <stdio.h>
#include <string.h>

void reverse(char * message);

int main(void)
{
	char chr;
	char array[100];
	int i;

	printf("Enter a mesage: ");
	i = 0;
	while ((chr = getchar()) != '\n')
	{
			array[i++] = chr;
	}
	array[i] = '\0';
	printf("Before the reverse:\n %s\n", array);
	reverse(array);
	printf("After the reverse:\n %s\n", array);

	return 0;
}

void reverse(char * message)
{
	char * start, *end;
	char temp;
	start = message;
	end = message + strlen(message) - 1;

	while (start < end)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}
