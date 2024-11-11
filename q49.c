#include <stdio.h>

int fact(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact*=i;
    }
    return fact;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial = %d", fact(n));
    return 0;
}