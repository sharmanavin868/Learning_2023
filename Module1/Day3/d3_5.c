#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int i, j;
    int smallestDigit = 9;
    int largestDigit = 0;
    int valid = 1;

    for (i = 0; i < n; i++) {
        int num = numbers[i];

        while (num != 0) {
            int digit = num % 10;

            if (digit < smallestDigit) {
                smallestDigit = digit;
            }

            if (digit > largestDigit) {
                largestDigit = digit;
            }

            num /= 10;
        }
    }

    if (smallestDigit == 9 || largestDigit == 0) {
        printf("Not Valid\n");
        valid = 0;
    }

    if (valid) {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int numbers[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);
    return 0;
}
