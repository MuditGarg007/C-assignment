#include <stdio.h>

int main() {
    int i, j;
    float sum = 0.0, fact;

    for (i = 1; i <= 7; i++) {
        fact = 1.0;
        for (j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += i / fact;
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
