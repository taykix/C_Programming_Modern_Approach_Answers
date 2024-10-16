#include <stdio.h>

int main()
{
	// Section 4.1.1
	int i, j, k;
	// Expected Output : 1 , 2
	i = 5;
	j = 3;
	printf("%d %d%\n", i / j, i % j);
	// Expected Output : 0
	i = 2; j = 3;
	printf("%d\n", (i + 10) % j);
	// Expected Output : 1
	i = 7; j = 8; k = 9;
	printf("%d\n", (i + 10) % k / j);
	// Expected Output : 0
	i = 1; j = 2; k = 3;
	printf("%d\n", (i + 5) % (j + 2) / k);

	// Section 4.1.2
	// No in C89 the value depents on the compiler
	// but in C99 the values must be equal
	printf("%d %d\n", (-8) / 7, -(7 / 7));

	// Section 4.1.3 (Truncating towards to negative infinity is possible)
	// Expected values are : 1, -1 | -2, -1 | -2, 1
	printf("%d, %d, %d, %d\n", 8 / 5, -8 / 5, 8 / -5, -8 / -5);

	// Section 4.1.4 (Truncating towards to zero well defined)
	// Expected values are : 1, -1 , -1 , 1
	printf("%d, %d, %d, %d\n", 8 / 5, -8 / 5, 8 / -5, -8 / -5);

	// Section 4.1.5 (C89)
	// Expected values are : 3, -3 | 2, 3 | -2, -3
	printf("%d, %d, %d, %d\n", 8 % 5, -8 % 5, 8 % -5, -8 % -5);

	// Section 4.1.6 (C99)
	// Expected values are : 3, -3, 3, -3
	printf("%d, %d, %d, %d\n", 8 % 5, -8 % 5, 8 % -5, -8 % -5);

	// Section 4.1.7
	// The original algorithm is more reliable because it handles
	// the zero remainder case correctly by ensuring the result is always a single digit

	// Section 4.1.8
	// yes it will work

	// Section 4.2.10
	// Expected Output: 63, 8
	i = 7, j = 8;
	i *= j + 1;
	printf("%d, %d\n", i, j);
	// Expected Output: 3 2 1
	i = j = k = 1;
	i += j += k;
	printf("%d %d %d\n", i, j, k);
	// Expected Output:  2 -1 3
	i = 1; j = 2; k = 3;
	i -= j -= k;
	printf("%d %d %d\n", i, j, k);
	// Expected Output: 0 0 0
	i = 2; j = 1; k = 0;
	i *= j *= k;
	printf("%d %d %d\n", i, j, k);

	// Section 4.2.10
	// Expected Output : 12 12
	i = 6;
	j = i += i;
	printf("%d %d\n", i, j);
	// Expected Output : 3 4
	i = 5;
	j = (i -= 2) + 1;
	printf("%d %d\n", i, j);
	// Expected Output : 2, 8
	i = 7;
	j = 6 + (i = 2.5);
	printf("%d %d\n", i, j);
	// Expected Output :  6 9
	i = 2; j = 8;
	j = (i = 6) + (j = 3);
	printf("%d %d\n", i, j);

	// Section 4.3.11
	// Expected Output : 0 , 2
	i = 1;
	printf("%d , ", i++ - 1);
	printf("%d\n", i);
	// Expected Output : 4 11 6
	i = 10; j = 5;
	printf("%d ", i++ - ++j);
	printf("%d %d\n", i, j);
	// Expected Output : 0 8 7
	i = 7; j = 8;
	printf("%d ", i++ - --j);
	printf("%d %d\n", i, j);
	// Expected Output : 3 4 5 4
	i = 3; j = 4; k = 5;
	printf("%d ", i++ - j++ + --k);
	printf("%d %d %d\n", i, j, k);

	//Section 4.3.12
	// Expected Output : 6 16
	i = 5;
	j = ++i * 3 - 2;
	printf("%d %d\n", i, j);
	// Expected Output : 6 -7
	i = 5;
	j = 3 - 2 * i++;
	printf("%d %d\n", i, j);
	// Expected Output : 6 23
	i = 7;
	j = 3 * i-- + 2;
	printf("%d %d\n", i, j);
	// Expected Output : 6 15
	i = 7;
	j = 3 + --i * 2;
	printf("%d %d\n", i, j);


	//Section 4.3.13
	// i += 1 is equal to ++i;

	//Section 4.4.14
	int a, b, c, d, e;
	a = b = c = d = e = 2;
	printf("First expression : %d\nSecond Expression : %d\n", a* b - c * d + e, ((a* b) - (c * d)) + e);
	printf("First expression : %d\nSecond Expression : %d\n", a / b % c / d, (a / b) % (c / d));
	printf("First expression : %d\nSecond Expression : %d\n", -a - b + c - +d, (((-a) - b) + c) - (+d));
	printf("First expression : %d\nSecond Expression : %d\n", a* -b / c - d, ((a* (-b)) / c) - d);
	// a) ((a * b) - (c * d)) + e
	// b) (a/b) % (c /d)
	// c) (((-a) - b) + c) - (+d)
	// d) ((a * (-b)) / c) - d

	//Section 4.5.15
	// Expected Output : 3 2
	i = 1; j = 2;
	i += j;
	printf("%d %d\n", i, j);
	// Expected Output : 0 2
	i = 1; j = 2;
	i--;
	printf("%d %d\n", i, j);
	// Expected Output : 1 2
	i = 1; j = 2;
	i * j / i;
	printf("%d %d\n", i, j);
	// Expected Output : 1 3
	i = 1; j = 2;
	i % ++j;
	printf("%d %d\n", i, j);


}

//First Session 35:25 concentrated minutes.
//Second Session 58:05 concentrated minutes.
//Third Session 45:00 concentrated minutes.
//Fourth Session 32:00 concentrated minutes.