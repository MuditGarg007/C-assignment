#include <stdio.h>

int maxIdx(int arr[], int n) {
    int maxIdx = 0;
    for(int i=1; i<n; i++) {
        maxIdx = arr[maxIdx]>=arr[i] ? maxIdx : i;
    }
    return maxIdx;
}

int minIdx(int arr[], int n) {
    int minIdx = 0;
    for(int i=1; i<n; i++) {
        minIdx = arr[minIdx]<=arr[i] ? minIdx : i;
    }
    return minIdx;
}

int main() {
    int n = 10;
    int arr[n];
    printf("Enter elements: \n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Index of max element is: %d \n", maxIdx(arr, n));
    printf("Index of min element is: %d \n", minIdx(arr, n));

}