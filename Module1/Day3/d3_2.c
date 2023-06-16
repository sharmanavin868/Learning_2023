#include <stdio.h>

void printBits(int num) {
    int i;
    unsigned int mask = 1 << 31; // Initialize the mask with the leftmost bit

    for (i = 0; i < 32; i++) {
        int bit = (num & mask) ? 1 : 0; // Check if the bit is set or not
        printf("%d", bit);
        
        if ((i + 1) % 8 == 0) {
            printf(" "); // Add a space after every 8 bits for better readability
        }
        
        mask >>= 1; // Right-shift the mask to check the next bit
    }

    printf("\n");
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    printf("Bits: ");
    printBits(num);
    return 0;
}


