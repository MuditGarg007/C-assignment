#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    for(int i=2; i<n; i++) {
        if(n%i==0) return false;
    }

    return true;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for(int i=2; i<=n; i++) {
        if(isPrime(i)) printf("%d \n", i);
    }
    return 0;
}