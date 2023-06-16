#include <stdio.h>

int countSetBits(unsigned int num) {
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
    unsigned int array[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(array) / sizeof(array[0]);
    int totalSetBits = 0;

    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(array[i]);
    }

    printf("Total number of set bits in the given array: %d\n", totalSetBits);

    return 0;
}
