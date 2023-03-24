#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left in the year, taking leap years into account
 * Return: 0
 */

/* Declare the convert_day function */
int convert_day(int month, int day);

/* Declare the print_remaining_days function */
void print_remaining_days(int month, int day, int year);

int main(void)
{
	int month;
	int day;
	int year;

	month = 2;
	day = 9;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}