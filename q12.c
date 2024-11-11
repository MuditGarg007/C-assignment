/*Write a C program to check whether a character is an alphabet, digit */

#include<stdio.h>

int main() {
    char ch = '&';

    if(ch>='0' && ch<='9') printf("%c is a digit", ch);
    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) printf("%c is an alphabet", ch);
    else printf("%c is a symbol", ch);

    return 0;
}