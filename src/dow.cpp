/*

	Author: Luke Chikkala

	This file finds the day of the week for a given date.
	Take note that this program returns an int value.

*/

#include <iostream>

int dow(int day, int month, int year)
{
	static int formula[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };

	year -= month < 3;
	return (year + year / 4 - year / 100 + year / 400 + formula[month-1] + day) % 7;
}
