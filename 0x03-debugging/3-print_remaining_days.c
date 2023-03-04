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
    int days_in_feb = 28;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        days_in_feb = 29;
    }

    if (month < 1 || month > 12)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (day < 1 || day > 31 || (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11)) || (month == 2 && day > days_in_feb))
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    int day_of_year = convert_day(month, day);
    int remaining_days = 365 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

    printf("Day of the year: %d\n", day_of_year);
    printf("Remaining days: %d\n", remaining_days - day_of_year);
}

