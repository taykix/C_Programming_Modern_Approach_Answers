#include <stdio.h>
#include <limits.h>

int main(void)
{
	// Section 7.1
	printf("a: %d, b: %d, c: %d\n", 077, 0x77, 0xABC);
	// Section 7.2
	// a, b, e are floating point constans. C and d are illegal constant because c has 9 in octal and d has underscore in constant
	// Section 7.2.3
	// b is not legal
	// Section 7.3.4
	// d is illegal, printf requires a string
	// Section 7.3.5
	// all of them are legal, The standard describes no way to create "binary literals". However, the latest versions of GCC and Clang support this feature using a syntax similar to the hex syntax, except it's b instead of x
	// Section 7.3.6
	// a) char, b) short int, c)short int, d) int
	printf("short int Size : %lu Byte\n", sizeof( short int ) );
	printf("Short Int min from %d till %d\n", SHRT_MIN, SHRT_MAX);
	printf("int Size : %lu Byte\n", sizeof( int ) );
	printf("Int min from %d till %d\n", INT_MIN, INT_MAX);
	// Section 7.3.7
	// a) 010, b) 012, c) 015, d) 011
	// Section 7.3.8
	// a) 0x8, 0xA, 0xD, 0x9
	// Section 7.4.9
	// the result will be an int
	// Section 7.4.10
	// unsigned int, because the (int) cast applies only to j, not j * k
	// Section 7.4.11
	// promotes other types to double
	// Section 7.4.12
	// int casts to float, then i + f cast to double from float
	// Section 7.4.13
	// a) int -3, b) long 7, c) float 6.5, d) double 3.75, e) double -1, f) int 6
	printf("%d\n", '\32');
	// Section 7.4.14
	// No, the statement could fail if the value of f is larger than the largest value of int
	// Section 7.4.15
	typedef char Int8;
	typedef short Int16;
	typedef int Int32;

	return 0;
}

// First Session 67:31 focused minutes.
// Second Session 45:57 focused minutes.
// Third Session 54:38 focused minutes.
// Forth Session 40:14 focused minutes.
