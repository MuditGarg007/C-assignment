#include <stdio.h>
int main() {
    int sum, n;
    printf("Enter N: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        sum+=i*2;
    }
    printf("Answer: %d", sum);
    return 0;
}