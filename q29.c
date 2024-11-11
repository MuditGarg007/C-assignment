#include <stdio.h>
#include <math.h>
int main() {
    int n, flag=0;
    printf("Enter number: ");
    scanf("%d", &n);
    for(int i=2; i<sqrt(n); i++) {
        if(n%i == 0) {
            printf("It is a composite number");
            flag=1;
            break;
        }
    }
    if(flag==0) printf("It is a prime number");
    return 0;
}