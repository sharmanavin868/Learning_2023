/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void printExponent(double x) {
    unsigned long long *ptr = (unsigned long long *)&x; // Type punning through pointer conversion
    
    unsigned long long exponentBits = (*ptr >> 52) & 0x7FF; // Extract exponent bits
    unsigned long long exponentHex = exponentBits - 1023; // Convert to decimal
    
    printf("Exponent (Hex): 0x%llX\n", exponentHex);
    
    printf("Exponent (Binary): ");
    for (int i = 10; i >= 0; i--) {
        printf("%llu", (exponentBits >> i) & 1); // Print each bit
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    
    printf("Double Value: %lf\n", x);
    printExponent(x);
    
    return 0;
}
