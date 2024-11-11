/*Write a C program to check whether a given year is Leap year or not */

#include<stdio.h>
#include<stdbool.h>

int main() {
    int year = 2020;
    
    bool divBy4 = year%4==0;
    bool divBy100 = year%100==0;
    bool divBy400 = year%400==0;

    if((divBy4 && !divBy100) || (divBy4 && divBy100 && divBy400)) printf("%d is a Leap Year", year);
    else printf("%d is not a leap year", year);

    return 0;
}