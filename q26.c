#include <stdio.h>
#include <math.h>
int main() {
    int n, cubeSum=0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp!=0) {
        cubeSum += pow(temp%10, 3);
        temp/=10;
    }
    if(cubeSum == n) printf("It is an Armstrong number");
    else printf("It is not an armstrong number");
    return 0;
}