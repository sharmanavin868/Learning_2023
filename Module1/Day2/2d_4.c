
#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1;
    }
    return count;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements of the array in hexadecimal format:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%x", &array[i]);
    }

    int totalSetBits = 0;
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(array[i]);
    }

    printf("Total number of set bits in the given array: %d\n", totalSetBits);

    return 0;
}
