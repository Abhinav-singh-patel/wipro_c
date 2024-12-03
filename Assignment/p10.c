//  Convert the Odd elements in an array to Even numbers by adding one and Convert the Even elements into Odd by subtracting 1.

#include <stdio.h>

void convertOddEven(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i]--;
        } else {
            arr[i]++;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    convertOddEven(arr, n);

    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}