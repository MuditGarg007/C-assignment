/*WAP to calculate the root of a Quadratic Equation*/

#include<stdio.h>
#include<math.h>

int main() {
    int a,b,c;

    printf("Enter co-efficient of x^2: ");
    scanf("%d", &a);
    printf("Enter co-efficient of x: ");
    scanf("%d", &b);
    printf("Enter constant: ");
    scanf("%d", &c);

    float sqrtD = sqrt(b*b-4*a*c);
    float root1 = (-b+sqrtD)/(2*a);
    float root2 = (-b-sqrtD)/(2*a);

    printf("Root 1: %.2f", root1);
    printf("Root 2: %.2f", root2);

    return 0;
}