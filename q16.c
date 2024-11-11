/*Write a program in C to implement Simple Calculator*/

#include<stdio.h>

int main() {
    int a,b,res;
    char op;
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+' : res = a+b; break;
        case '-' : res = a-b; break;
        case '*' : res = a*b; break;
        case '/' : res = a/b; break;
        default: printf("Invalid Input");
    }

    printf("%d", res);

    return 0;
}