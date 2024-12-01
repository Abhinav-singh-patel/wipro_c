#include <stdio.h>
#include <math.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Method 1: Using sqrt() function
    double sqrt_num = sqrt(num);
    if (sqrt_num == (int)sqrt_num) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    // Method 2: Using a loop
    int i = 1;
    while (i * i <= num) {
        if (i * i == num) {
            printf("%d is a perfect square.\n", num);
            return 0;
        }
        i++;
    }
    printf("%d is not a perfect square.\n", num);

    return 0;
}