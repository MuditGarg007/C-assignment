#include <stdio.h>

int main() {
    int sum = 0, term = 14;
    for (int i = 0; i < 100; i++) {
        sum += term;
        term += 20;
    }
    printf("Sum of the series: %d\n", sum);
    return 0;
}
