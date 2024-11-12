#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= 1.0 / i;
        } else {
            sum += 1.0 / i;
        }
    }
    printf("Sum of the series = %.2f\n", sum);
    return 0;
}
