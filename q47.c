#include<stdio.h>

int sum(int a, int b){
    printf("Sum = %d", a+b);
}

int sub(int a, int b){
    printf("Difference = %d", a-b);
}

int prod(int a, int b){
    printf("Product = %d", a*b);
}

int div(int a, int b){
    printf("Division = %d", a/b);
}

int main() {
    int a,b;
    char op;
    printf("Enter expression: ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+' : sum(a, b); break;
        case '-' : sub(a, b); break;
        case '*' : prod(a, b); break;
        case '/' : div(a, b); break;
        default: printf("Invalid Input");
    }

    return 0;
}
