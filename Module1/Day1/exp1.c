/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int findMaxIfElse(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int findMaxTernary(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    int maxIfElse = findMaxIfElse(a, b);
    int maxTernary = findMaxTernary(a, b);
    
    printf("Using if-else, the maximum number is: %d\n", maxIfElse);
    printf("Using ternary operator, the maximum number is: %d\n", maxTernary);
    
    return 0;
}
