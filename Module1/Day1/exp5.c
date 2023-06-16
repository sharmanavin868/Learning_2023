/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result = num;  // Initialize result with the given number

    switch (oper_type) {
        case 1:
            result |= (1 << 0);  // Set 1st bit
            break;
        case 2:
            result &= ~(1 << 31);  // Clear 31st bit
            break;
        case 3:
            result ^= (1 << 15);  // Toggle 16th bit
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }

    return result;
}

int main() {
    int num, oper_type;

    printf("Enter the integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    int result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}
