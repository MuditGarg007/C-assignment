#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0) {
        sum+=n%10;
        n/=10;
    }
    printf("Sum of its digits are: %d", sum);
    return 0;
}