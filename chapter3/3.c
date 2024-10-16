#include <stdio.h>

int main(void)
{
int x;
scanf("%d", &x);
printf("x has the value: %d\n", x);
scanf(" %d", &x);
printf("x has the value: %d\n", x);

return 0;
}
