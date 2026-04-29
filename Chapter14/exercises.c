#include <stdio.h>

//Exercise 1a

#define CUBE(x) ((x)*(x)*(x))

//Exercise 1b
#define REM4(x) (((x)%4))

//Exercise 1c
#define CON(x,y) ((x)*(y) < 100 ? 1 : 0)

//Exercise 2
#define NELEMS(a) (sizeof((a))/sizeof(*(a))) 

//Exercise 3
// a) result will be 4
// b) result will be 4
// c) #define DOUBLE(x) 2*(x)

//Exercise 4
#define AVG(x,y) (((x)+(y))/2)
#define AREA(x,y) ((x)*(y))

//Exercise 5
//a) d
//b) 2

//Exercise 6
int main (int argc, char * argv())
{
    /* EX1 TESTS
    printf("cube of 3 is %d \n", CUBE(3));
    printf("Reminder of 27 when divided by 4 %d \n", REM4(27));
    printf("23 * 2 < 100 ?%d \n", CON(23,2));
    printf("23 * 209 < 100 ?%d \n", CON(23,209)); 
    */
    /* EX2 Test
    int a[100];
    printf("size of a is: %lkk\n", NELEMS(a));
    */
    return 0;
}
