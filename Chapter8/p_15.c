#include <stdio.h>

#define MAX_LENGTH 80

int main()
{
    char message[MAX_LENGTH], ch;
    int shift_amount, i;

    printf("Enter Message to be encrypted:");

    i = 0;
    while (1)
    {
        ch = getchar();
        if (ch =='\n')
            break;
        message[i++] = ch;
    }
    message[i] = '\0';

    printf("Enter shift amount (1-25):");
    scanf("%d", &shift_amount);

    printf("Encrypted message:");

    i = 0;
    while(message[i])
    {
        if (message[i] >= 'a' && message[i] <= 'z')
            printf("%c", ((message[i] - 'a') + shift_amount) % 26 + 'a');
        else if (message[i] >= 'A' && message[i] <= 'Z')
            printf("%c", ((message[i] - 'A') + shift_amount) % 26 + 'A');
        else
            printf("%c", message[i]);
        i++;
    }
    printf("\n");

    return 0;
}
