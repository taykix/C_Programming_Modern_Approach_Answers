#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int value = 0;
	char ch, first_letter;
	int last_name = 0;
	printf("Enter a first and last name: ");

	while (ch != '\n')
	{
		ch = getchar();
		if (ch ==' ')
			continue;
		if (ch != '\n' && last_name == 0)
		{
			first_letter = ch;					//first letter stored
			last_name = 1;						//last name token arranged
			while (ch != ' ' && ch != '\n')		//passing other letters in first name till space
			{
				ch = getchar();
			}
		} else if (ch != '\n' && last_name == 1) //printing last name till space or eol
		{
			printf("%c", ch);
			while (ch != ' ')
			{
				ch = getchar();
				if (ch == '\n')
					break;
				printf("%c", ch);
			}

		}
	}

	printf(", %c.\n", first_letter);

	return 0;
}
