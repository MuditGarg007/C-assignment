/*Write a C program to check whether a triangle is Equilateral, scalene, or isosceles */

#include<stdio.h>

int main() {
    int side1 = 3;
    int side2 = 3;
    int side3 = 3;

    if(side1==side2 && side2==side3) printf("It is an equilateral triangle");
    else if(side1==side2 || side1==side3 || side2==side3) printf("It is an isosceles triangle");
    else printf("It is a scalene triangle");

    return 0;
}