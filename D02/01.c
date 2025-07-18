#include <stdio.h>


int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}


void DaysInMonth(int month, int year) {
    int days;
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = 28;
            break;
        default:
            printf("Invalid month.\n");
            return;
    }
    printf("Number of days in month %d of year %d: %d\n", month, year, days);
}

int main() {
    int year, month;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    if (isLeapYear(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    DaysInMonth(month, year);

    return 0;
}


/*Algorithm 

1. Start.
2. enter a year and read the input.
3. enter a month (1-12) and read the input.
4. Check if year is a leap year:
    - If (year is divisible by 4 and not divisible by 100) or (year is divisible by 400), it is a leap year.
    - Otherwise, it is not a leap year.
5. Display whether the year is a leap year or not.
6. Determine the number of days in the entered month:
    - If month is 1, 3, 5, 7, 8, 10, or 12, days = 31.
    - If month is 4, 6, 9, or 11, days = 30.
    - If month is 2, days = 28.
    - If month is invalid, display an error message and stop.
7. Display the number of days in the entered month and year.
8. End.
*/
