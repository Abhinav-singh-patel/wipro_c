//Count the times an element is present in an Array

#include <stdio.h>

int countOccurrences(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int count = countOccurrences(arr, n, x);
    printf("Count of %d: %d\n", x, count);
    return 0;
}