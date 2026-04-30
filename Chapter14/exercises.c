#include <stdlib.h>
#include <stdio.h>
#include <math.h>

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

//Exercise 6a
#define DISP(f,x) printf(#f "(%g) = %g\n", x, f(x))
//Excercise 6b
#define DISP2(f,x,y) printf(#f "(%g,%g) = %g\n", x, y, f(x,y))

//Exercise 7a
// it will generate a function with a type for GENERIC_MAX(long) it will generate:
//long long_max(long x, long y)
//{
//  return x > y ? x : y;
//}
//Exercise 7b
// unsigned long is two words and it will not work with the functions name.
//Exercise 7c
// typedef unsigned long ULONG and we can generate GENERIC_MAX(ULONG)

//Exercise 8

#define STR_HELPER(X) #X
#define STR(X) STR_HELPER(X)
#define LINE_FILE STR(__LINE__)" of file  "__FILE__

//Exercise 9a
#define CHECK(x,y,n) (((x) >= 0 && (x) <= (n - 1)) && ((y) >= 0 && (y) <= (n - 1)) ? 1 : 0)

//Exercise 9b
#define MEDIAN(x,y,z) ((z) > (y) && (y) > (x))  || ((x) > (y) && (y) > (z)) ? (y) :\
                       ((((z) > (x) && (x) > (y))  || ((y) > (x) && (x) > (z))) ? (x) : (z))

//Exercise 9c
#define POLYNOMIAL(x) (3*(x)*(x)*(x)*(x)*(x)+\
                        2*(x)*(x)*(x)*(x)-\
                        5*(x)*(x)*(x)-\
                        (x)*(x)+\
                        7*(x) - 6)
//Exercise10
//If functions have side affects or when function relies on single evaluation of arguments
// Functions rely on type safety, recursion or complex flows are unsuitable as macros

//Exercise11
#define ERROR(...) fprintf(stdout, __VA_ARGS__)

//Exercise12
// c, e fails

//Exercise13
#define N 100
// only printf("N is undefined\n"); line remains other lines with Ns and macros are empty lines
// b processor starts from top and function f called before the undef, still function definition is after main so
// output will be "N is undefined\n"

void f(void);

//Exercise14

//blank line
//blank line
//blank line
//blank line
//blank line
//blank line
//blank line
//int main(void)
//{
//int a[= 10], i, j, j, m; //ERROR
//
//blank line
// i = j;
//blank line
//blank line
//blank line
//
// i = 10 * j + 1;
// i = (x,y) x-y(j,k); //ERROR
// i = ((j)*(j))*((j)*(j));
// i = ((j)*(j)*(j));
// i = jk; //ERROR
// puts("i" "j");
//
//blank line
// i = SQR(j); //ERROR
//blank line
// i = (j);
//
//return 0;
//}

//Exercise15

/*
#ifdef defined(ENGLISH)
printf("Insert Disk 1\n");
#elif defined(FRENCH)
printf("Inserez Le Disque 1\n");
#elif defined(SPANISH)
printf("Inserte El Disco 1\n");
#endif
*/

//Exercise16
_Pragma("ident \"foo\"")

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

    /* EX6 Test
    DISP(sqrt, 9.0);
    DISP2(pow,2.0,3.0);
    */
    
    /* EX 8 Test 
    const char *str = LINE_FILE;
    printf("%s\n", str);
    return 0;
    */
    
    /* EX 9a Test 
    printf("check(1, 2, 3) = %d\n", CHECK(1,2,3));
    printf("check(4, 12, 30) = %d\n", CHECK(4,12,30));
    printf("check(-1, 20, 30) = %d\n", CHECK(-1,20,30));
    */
    
    /* EX 9b Test 
    printf("median(1,2,3) = %d\n", MEDIAN(1,2,3));
    printf("median(32,255,2) = %d\n", MEDIAN(32,255,2));
    printf("median(10,222,-253) = %d\n", MEDIAN(10,222,-253));
    */

    /* EX 9c Test 
    printf("POLYNOMIAL(0) %d\n", POLYNOMIAL(0));
    printf("POLYNOMIAL(1) %d\n", POLYNOMIAL(1));
    printf("POLYNOMIAL(2) %d\n", POLYNOMIAL(2));
    printf("POLYNOMIAL(3) %d\n", POLYNOMIAL(3));
    */
    /* Ex 11 Test 
    int index = __LINE__;
    ERROR("Range error: index = %d\n", index);
    */
    /* Ex 13 Test
    f();
    #ifdef N
    #undef N
    #endif
    */


     
   return 0;
}

void f(void)
{
#if defined(N)
    printf("N is %d\n", N);
#else
    printf("N is undefined\n");
#endif
}
