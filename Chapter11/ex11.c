#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
//Excercise 1: a and g.
//Excercise 2: int * p,q; int i; e is legal. f is legal. i is legal.)
//Excercise 3: *sum = 0.0. *sum += a[i]. *avg = *sum /n;
//Excercise 4:

void swap(int * p, int *q)
{
	int temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}

//Excercise 5:
void split_time(long total_sec, int *hr, int *min, int *sec)
{
	*hr = total_sec / 3600;
	total_sec -= *hr * 3600;
	*min = total_sec / 60;
	total_sec -= *min * 60;
	*sec = total_sec;
}
//Excercise 6
void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	bool is_second_largest = false;
	if (a[0] > a[1])
	{
		*largest = a[0];
		*second_largest = a[1];
	}
	for (int i = 2; i < n; i++)
	{
		if (a[i] >= *largest)
		{
			*second_largest = *largest;
			*largest = a[i];
		} else if (a[i] > *second_largest)
			*second_largest = a[i];
	}
}
//Excercise 8
void split_date(int day_of_year, int year, int *month, int *day)
{
	int months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
		months[1]++;
	
	for(int i = 0, i < 12; i++)
	{
		if (day_of_year < months[i])
		{
			*day = day_of_year;
			*month = i;
		} else
			day_of_year -= months[i];
	}
}
//Excercise 9
int *find_largest(int a[], int n)
{
	int *largest;

	largest = &a[0]
	for(int i = 1; i < n; i++)
	{
		if (*largest > a[i])
			largest = &a[i];
	}
	return largest;
}
