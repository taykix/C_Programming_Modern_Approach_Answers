#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int i, sum;
    
    sum = 0;
    i = argc - 1;
    while(i > 0)
    {
        sum+= atoi(argv[i--]);
    }
    printf("Total: %d\n", sum);
    return 0;
}

