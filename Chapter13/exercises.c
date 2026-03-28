#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    //Ex 1 
    // a is correct, takes a char. b is not functioning as wished, "\n" as a char is undefined behaivor
    // c is also takes char pointer and there is no '\0' on that char pointer so it is undefined behaivor
    // d is correct, e is not because printf takaes char * argument not char(int)
    // f and g correct, h is not because putchar takes char as argument not string literal(char *)
    // i is not correct, puts takes string(char *) as an argument not char, j and k correct.
    
    //Ex2
    // b and c calls are legal. b prints "a", c prints "abc"

    //Ex3
    // i = 12, s = abc34, j = 56

    //Ex4a
    int read_line4a(char str[], int n)
    {
        char ch, i = 0;

        while((ch = getchar()) != '\n' && ch != EOF)
        {
            if (i == 0 && isspace(ch))
            ;
            else if (i < n)
                str[i++] = ch;
        }
        str[i] = '\0';
        return i;
    }
    //Ex4b
    int read_line4b(char str[], int n)
    {
        char ch, i = 0;

        while((ch = getchar()) != '\n' && ch != EOF && !isspace(ch))
        {
            if (i < n)
                str[i++] = ch;
        }
        str[i] = '\0';
        return i;
    }
    //Ex4c
    int read_line4c(char str[], int n)
    {
        char ch, i = 0;

        while((ch = getchar()) != '\n' && ch != EOF)
        {
            if (i < n)
                str[i++] = ch;
        }
        str[i++] = '\n';
        str[i] = '\0';
        return i;
    }
    //Ex4d
    int read_line4d(char str[], int n)
    {
        char ch, i = 0;

        while((ch = getchar()) != '\n' && ch != EOF)
        {
            if (i < n)
                str[i++] = ch;
        }
        str[i++] = '\n';
        str[i] = '\0';
        return i;
    }
    //Ex5
    int capitalize_a(int argc, char * argv[])
    {
        int i, j;

        i = 0;
        while(i < argc)
        {
            j = 0;
            while(j < strlen(argv[i]))
            {
                if (isalpha(argv[i][j]))
                    printf("%c", toupper(argv[i][j++]));
                else
                    printf("%c", argv[i][j++]);
            }
            if (i != argc - 1)
                printf(" ");
            i++;
        }
        return 0;
    }
    //Ex5b
    int capitalize_b(int argc, char * argv[])
    {
        char * p;
        int i;

        i = 0;
        while(i < argc)
        {
            p = argv[i];
            while (*p)
            {
                if (isalpha(*p))
                    printf("%c", toupper(*p++));
                else
                    printf("%c", *p++);
            }
            if (i < argc - 1)
                printf(" ");
            i++;
        }
        return 0;
    }
    // Ex 6
    int censor(char * text)
    {
        while (*text)
        {
            if(!strncmp(text, "foo", 3))
                strncpy(text, "xxx", 3);
            text++;
        }
        return 0;
    }
    char text1[19] = "fffoofighters!fooH";
    censor(text1);
    printf("%s", text1);
    return 0;
    // Ex 7 c is not equivalent.
}