#include <stdio.h>

int main() {
    int n, rev, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp!=0) {
        rev *=10;
        rev+= temp%10;
        temp/=10;
    }
    printf("Reverse of the number is: %d \n", rev);
    if(n==rev) printf("Hence number is a palindrome");
    else printf("Hence number is not a palindrome");
    return 0;
}