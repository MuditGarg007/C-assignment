#include <stdio.h>

int main() {
    int days, years, weeks;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    years = days / 365;
    days %= 365;
    weeks = days / 7;
    days %= 7;
    printf("Years: %d, Weeks: %d, Days: %d", years, weeks, days);
    return 0;
}