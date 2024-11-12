#include <stdio.h>

int main() {
    int customer_id, units;
    float amount;
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);
    if (units <= 199) {
        amount = units * 1.20;
    } else if (units <= 500) {
        amount = 199 * 1.20 + (units - 199) * 1.80;
    } else {
        amount = 199 * 1.20 + 301 * 1.80 + (units - 500) * 2.00;
    }
    printf("Customer ID: %d\nTotal Amount to Pay: %.2f\n", customer_id, amount);

    return 0;
}
