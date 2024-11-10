#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c, array[1024] = {0};
    int i = 0;
    printf("Enter message: ");

    while ((c = getchar()) != '\n' && i < 1024)
    {
        array[i++] = c;
    }

    printf("In B1FF-speak: ");

    for (i = 0; i < 1024; i++)
    {
        switch (c = toupper(array[i]))
        {
        case 'A':
            putchar('4');
            break;
        case 'B':
            putchar('8');
            break;
        case 'E':
            putchar('3');
            break;
        case 'O':
            putchar('0');
            break;
        case 'S':
            putchar('5');
            break;
        default:
            putchar(c);
            break;
        }
    }
    printf("!!!!!!!!!!\n");
    
}