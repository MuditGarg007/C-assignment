/*Write a C program to swap two variables without using a third variable*/

#include<stdio.h>

int main() {
    int a = 6;
    int b = 9;

    printf("Initial value of a: %d \n", a);
    printf("Initial value of b: %d \n", b);

    printf("Swapping.. \n");
    a = a^b;
    b = a^b;
    a = a^b;

    printf("New value of a: %d \n", a);
    printf("New value of b: %d \n", b);
    return 0;
}