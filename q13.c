/*Write a C program a program to check whether an alphabet is a vowel or consonant */

#include<stdio.h>

int main() {
    char alpha = 'x';

    if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u'){
        printf("%c is a vowel", alpha);
    }
    else{
        printf("%c is a cononant", alpha);
    }
    return 0;
}