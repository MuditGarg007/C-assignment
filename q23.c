/*Write a program to print Fibonacci sequence 0 1 1 2 3 5 8 13…… N terms and prints the sum of sequence.*/

#include<stdio.h>

int main() {
    int n = 10;

    int a = 0;
    int b = 1;
    for(int i=1; i<=n; i++) {
        if(i==1) printf("0 ");
        else if(i==2) printf("1 ");
        int c = a+b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}