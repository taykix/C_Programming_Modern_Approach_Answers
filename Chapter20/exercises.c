#include <stdio.h>

int main(void)
{
	/*
	//Exercise 1a
	// i = 00001000 j = 00001010 so 0
	unsigned short i = 8;
	unsigned short j = 9;
	printf("%d", i >> 1 + j >> 1);
	*/

	/*
	//Exercise 1b
	// Expected: 0
	unsigned short i = 1;
	printf("%d\n", i & ~i);	
	*/
	
	/*
	//Exercise 1c
	// Expected: 1
	unsigned i = 2;
	unsigned j = 1;
	unsigned k = 0;
	printf("%d\n", ~i & j ^ k);
	*/
	
	/*
	//Exercise 1d
	//Expected: 15
	unsigned short i = 7;
	unsigned short j = 8;
	unsigned short k = 9;
	printf("%d\n", i ^ j & k);
	*/
	
	/*
	//Exercise 2
	unsigned short i = 1;
	i = (i ^ 0x08);
	printf("%d\n", i);
	*/
}
