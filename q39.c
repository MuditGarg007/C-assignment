#include <stdio.h>
#include <math.h>

int main() {
    int dec, bin = 0, digits=0;
    printf("Enter decimal number: ");
    scanf("%d", &dec);
    while(dec>=1){
        bin = (dec%2)*(pow(10, digits++)) + bin;
        dec/=2;
    }

    printf("It's binary conversion is: %d", bin);
}