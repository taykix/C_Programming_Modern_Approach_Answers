#include <stdio.h>

#define MSG_LEN 80

int main(void)
{
	char msg[MSG_LEN], *p;
	printf("Enter a mesage: ");
	
	for (p = msg; p < msg + MSG_LEN; p++)
	{
		*p = getchar();
		if (*p == '\n')
			break;
	}

	for (p--; p >= msg; p--)
		putchar(*p);
	putchar('\n');

	return 0;
}
