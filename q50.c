#include <stdio.h>

int fact(int n) {
    if(n == 1 || n == 0) return 1;
    return fact(n-1)*n;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial = %d", fact(n));
    return 0;
}