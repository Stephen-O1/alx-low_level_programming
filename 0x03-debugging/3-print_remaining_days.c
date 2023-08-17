#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
if (month > 2)  // Adjust for leap year if month is after February
{
day++;  // Add the extra day for the leap year
}

printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int totalDaysInYear = 0;

for (int i = 1; i < month; i++)
{
totalDaysInYear += daysInMonth[i];  // Sum days of previous months
}
totalDaysInYear += day;  // Add days of current month

printf("Day of the year: %d\n", totalDaysInYear);
printf("Remaining days: %d\n", 365 - totalDaysInYear);
}
}
