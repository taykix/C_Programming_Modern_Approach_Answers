
/*
//Ex 1: These declarations are legal. 
struct { int x, y; } x;
struct { int x, y; } y;

#include <stdio.h>

int main(void)
{
	struct x;
	struct y;
	x.x = 3;
	x.y = 25;
	y.x = 4;
	y.y = 26;
	printf("x.x = %d y.x = %d\n", x.x, y.x);
	return (0);
}
*/
/*
//Ex 2a, 2b, 2c, 2d:
struct { double real, imaginary; } c1, c2, c3;

#include <stdio.h>

int main(void)
{
	c1.real = 0.0;
	c1.imaginary = 1.0;
	c2.real = 1.0;
	c2.imaginary = 0.0;
	c1 = c2;
	c3.real = c1.real + c2.real;
	c3.imaginary = c1.imaginary + c2.imaginary;
	printf("C3.real = %f, C3.imaginary = %f \n", c3.real, c3.imaginary);
}
*/
/*
//Ex 3a, 3b, 3c, 3d:
struct complex { double real, imaginary; };

#include <stdio.h>
struct complex add_complex(double real, double imaginary)
{
	struct complex new = {real , imaginary};
	return new;
}

int main(void)
{
	struct complex c1, c2, c3;	
	c1.real = 0.0;
	c1.imaginary = 1.0;
	c2.real = 1.0;
	c2.imaginary = 0.0;
	c1 = c2;
	c3 = add_complex(22, 324);
	printf("C3.real = %f, C3.imaginary = %f \n", c3.real, c3.imaginary);
}
*/
/*
//Ex 4
typedef struct{ double real, imaginary;} complex;

#include <stdio.h>
complex add_complex(double real, double imaginary)
{
	complex new = {real , imaginary};
	return new;
}

int main(void)
{
	complex c1, c2, c3;	
	c1.real = 0.0;
	c1.imaginary = 1.0;
	c2.real = 1.0;
	c2.imaginary = 0.0;
	c1 = c2;
	c3 = add_complex(22, 324);
	printf("C3.real = %f, C3.imaginary = %f \n", c3.real, c3.imaginary);
}



