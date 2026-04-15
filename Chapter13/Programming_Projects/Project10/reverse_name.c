#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 128

void reverse_name(char *name);
char *  read_name(char *buffer);

int main(void)
{
    char buffer[MAX_LEN];
    char * name;
    int i = 0;

    name = read_name(buffer);
    reverse_name(name); 

	return 0;
}

char * read_name(char * buffer)
{
    char ch;
    int i;
    char *p;
	printf("Enter a first and last name: ");
    
    i = 0;
    while(1 && i < MAX_LEN - 1)
    {
        ch = getchar();
        if (ch == '\n')
           break;
        buffer[i++] = ch;
    }
    buffer[i] = '\0';
    p = buffer;
    while(*p == ' ')
        p++;
    buffer = p;
    return buffer;
}

void reverse_name(char *name)
{
	char ch, first_letter;
	int last_name = 0;
    int i;

    i = 0;
    while (name[i])
	{
		if (last_name == 0)
		{
			first_letter = name[i++];					//first letter stored
			last_name = 1;						//last name token arranged
			while (name[i] != ' ')		//passing other letters in first name till space
			    i++;
            while (name[i] == ' ') //passing spaces
                i++;
		} else if (last_name == 1) //printing last name till space or eol
		{
			while (name[i])
			{
				printf("%c", name[i]);
                i++;
			}

		}
	}

	printf(", %c.\n", first_letter);
}
