/*Write a C program to swap two variables using a third variable */

#include<stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("Initial value of a: %d \n", a);
    printf("Initial value of b: %d \n", b);

    printf("Swapping.. \n");
    int temp = a;
    a = b;
    b = temp;

    printf("New value of a: %d \n", a);
    printf("New value of b: %d \n", b);
    return 0;
}