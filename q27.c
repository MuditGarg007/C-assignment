#include <stdio.h>
#include <math.h>
int main() {
    int n, cubeSum=0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(sqrt(n)-(int)sqrt(n)==(float)0){
         printf("It is a perfect square");
    }
    else{
        printf("It is not a perfect square");
    }
    return 0;
}