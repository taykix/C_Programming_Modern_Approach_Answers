#include <stdio.h>
#include <ctype.h>

#define STR_LEN 128

int compute_scrabble_value(const char * word);
void read_string();

int main(void)
{
	char ch;
    char buffer[STR_LEN];
    int value;

    read_string(buffer);
    value = compute_scrabble_value(buffer);
	printf("Scrabble value: %d\n", value);

	return 0;
}

void read_string(char * buffer)
{
    int i;
    char ch;
	printf("Enter a word: ");
    i = 0;

    while(1)
    {
        ch = getchar();
        if (ch == '\n' || ch == EOF || i > STR_LEN - 1)
            break;
        buffer[i++] = ch;
    }
    buffer[i] = '\0';
}


int compute_scrabble_value(const char * buffer)
{
    int value;
	int i;
    char ch;

    i = 0;
    value = 0;
	while (buffer[i])
	{
		ch = buffer[i++];
		if (ch == '\n')
			break;
		ch = toupper(ch);
		if ( ch == 'A' || ch == 'E' || ch == 'I'
			|| ch == 'L' || ch == 'N' || ch == 'O'
			|| ch == 'R' || ch == 'S' || ch == 'T'
			|| ch == 'U')
			value++;
		else if ( ch == 'D' || ch == 'G')
			value += 2;
		else if ( ch == 'B' || ch == 'C' || ch == 'M' || ch == 'P')
			value += 3;
		else if ( ch == 'F' || ch == 'H' || ch == 'V' || ch == 'W' || ch == 'Y')
			value += 4;
		else if ( ch == 'K')
			value += 5;
		else if ( ch == 'J' || ch == 'X' )
			value += 8;
		else if ( ch == 'Q' || ch == 'Z')
			value += 10;
	}

    return value;
}
