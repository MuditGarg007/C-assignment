#include <stdio.h>

int main() {
    int days;
    float fine;
    printf("Enter the number of days late: ");
    scanf("%d", &days);
    if (days <= 5) {
        fine = days * 0.50;
        printf("Fine = %.2f rupees\n", fine);
    } else if (days <= 10) {
        fine = 5 * 0.50 + (days - 5) * 1.00;
        printf("Fine = %.2f rupees\n", fine);
    } else if (days <= 30) {
        fine = 5 * 0.50 + 5 * 1.00 + (days - 10) * 5.00;
        printf("Fine = %.2f rupees\n", fine);
    } else {
        printf("Membership cancelled.\n");
    }
    return 0;
}
