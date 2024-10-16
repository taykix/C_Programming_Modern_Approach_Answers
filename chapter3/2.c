#include <stdio.h>

int main(void)

{
printf("%-8.1f,\n", 13.44); //a
printf("%10.6f,\n", 13.44); //b
printf("%-8.3f,\n", 13.44); //c
printf("%6.0f,\n", 13.44); //b

return 0;
}
