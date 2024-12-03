//  Remove duplicate elements from the Array and shift the
elements (If n duplicate elements are removed then n zeroes should trail in the array)



#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (i = n; i < n + n - i; i++) {
        printf("0 ");
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 1, 2, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, n);
    return 0;
}