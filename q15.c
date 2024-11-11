/*Write a C program to find largest of three numbers */

#include<stdio.h>

int main() {
    int a = 4;
    int b = 1;
    int c = 2;

    printf("%d is largest", a>b? (a>c? a : c) : (b>c? b : c));
    return 0;
}