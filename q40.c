#include <stdio.h>

int prod(int arr[], int n) {
    int product = 1;
    for(int i=0; i<n; i++) {
        product*=arr[i];
    }
    return product;
}

int sum(int arr[], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum+=arr[i];
    }
    return sum;
}

int avg(int arr[], int n) {
    int total = sum(arr, n);
    return total/n;
}   

int max(int arr[], int n) {
    int max = arr[0];
    for(int i=1; i<n; i++) {
        max = max>=arr[i] ? max : arr[i];
    }
    return max;
}

int min(int arr[], int n) {
    int min = arr[0];
    for(int i=1; i<n; i++) {
        min = min<=arr[i] ? min : arr[i];
    }
    return min;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Product of elements: %d", prod(arr, n));
    printf("Sum of elements: %d", sum(arr, n));
    printf("Average of elements: %d", avg(arr, n));
    printf("Max of elements: %d", max(arr, n));
    printf("Min of elements: %d", min(arr, n));
    return 0;
}