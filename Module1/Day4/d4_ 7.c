#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    int num = atoi(str);
    
    printf("Converted integer: %d\n", num);
    
    return 0;
}