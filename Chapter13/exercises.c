#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

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
        int ch, i = 0;

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
        int ch, i = 0;

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
        int ch, i = 0;

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
        int ch, i = 0;

        while((ch = getchar()) != '\n' && ch != EOF)
        {
            if (i < n)
                str[i++] = ch;
        }
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
    // Ex 7 d is not equivalent.
    // Ex 8 answer will be "tired-or-wired="
    // Ex 9 answer will be "computers"
    // Ex 10 char *q is undefined so it is pointing to unknown part of memory. We should allocate enough memory for that string.
    
    // Ex11
    int strcmp(char *s, char *t)
    {
       int i = 0;

       while (*s++ == *t++) 
       {
            if (*s == '\0')
                return 0;
       }
       return *s - *t;
    }
    //Ex12
    void get_extension(const char *file_name, char *extension)
    {
        const char *p;
        p = file_name;
        while (*p != '.')
        {
            if (*p == '\0')
                break;
            p++;
        }
        if (*p) {
            strcpy(extension, ++p);        
        } else {
            strcpy(extension, p);
        }
    }
    
    // Ex13
    void build_index_url(const char *domain, char *index_url)
    {
        char new_str[strlen(index_url) + 1];

        strcat(new_str, "http://www.");
        strcat(new_str, domain);
        strcat(new_str, "/index_url");
        strcpy(index_url, new_str);
    }
    // Ex14
    // it prints out string but everytime pointer moves one to the right and decrease value of the pointed char.
    // Grinch
    
    // Ex15
    // a has a value of 3
    // b has a value of 0
    // c it returns the index of a char from s which is not included in t

    // Ex16
    int count_spaces(const char s[])
    {
        int count = 0;

        while (*s++) 
            if (*s == ' ')
                count++;
        return count;
    }

    // Ex17
    bool test_extension(const char *file_name, const char *extension)
    { 
      char ex_p[strlen(extension) + 1];
      char cpy_file_name[strlen(file_name) + 1];
      char *p;

      strcpy(cpy_file_name, file_name);
      strcpy(ex_p, extension);
      p = cpy_file_name;

      while (*p)
      {
        if (*p == '.')
            break;
        p++;
      }
      int i = p - cpy_file_name;
      while (cpy_file_name[i])
      {
        cpy_file_name[i] = toupper(cpy_file_name[i]);
        i++;
      }
      i = 0;
      while (ex_p[i])
      {
        ex_p[i] = toupper(ex_p[i]);
        i++;
      }
      if (strcmp(ex_p, ++p) == 0)
        return true;
      return false;
    }
    
    // Ex18


    return 0;
}
