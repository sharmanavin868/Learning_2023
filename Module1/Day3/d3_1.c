#include <stdio.h>

void printNumbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");
}

void printSpaces(int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf(" ");
    }
}

void generatePattern(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printNumbers(i);
        if (i > 1) {
            printSpaces(2 * (n - i));
        }
    }
}

int main() {
    int num;
    printf("Enter the value of n: ");
    scanf("%d", &num);
    generatePattern(num);
    return 0;
}
