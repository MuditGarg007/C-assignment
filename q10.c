/*Write a C program to check whether a triangle is right angles, obtuse, acute triangle */

#include<stdio.h>

int main() {
    int angle1 = 30;
    int angle2 = 60;
    int angle3 = 90;

    if(angle1==90 || angle2==90 || angle3==90) printf("It is right angled triangle");
    else if(angle1>90 || angle2>90 || angle3>90) printf("It is an obtuse angled triangle");
    else printf("It is an acute angled triangle");

    return 0;
}