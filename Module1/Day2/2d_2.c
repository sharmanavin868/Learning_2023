

#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    char *ptr_a = (char *)a;
    char *ptr_b = (char *)b;
    char temp;
    
    for (size_t i = 0; i < size; i++) {
        temp = *(ptr_a + i);
        *(ptr_a + i) = *(ptr_b + i);
        *(ptr_b + i) = temp;
    }
}

int main() {
    int num1, num2;
    float f1, f2;
    char c1, c2;
    
    printf("Enter the value of num1: ");
    scanf("%d", &num1);
    printf("Enter the value of num2: ");
    scanf("%d", &num2);
    
    printf("Enter the value of f1: ");
    scanf("%f", &f1);
    printf("Enter the value of f2: ");
    scanf("%f", &f2);
    
    printf("Enter the value of c1: ");
    scanf(" %c", &c1);
    printf("Enter the value of c2: ");
    scanf(" %c", &c2);
    
    printf("\nBefore swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("f1 = %.2f, f2 = %.2f\n", f1, f2);
    printf("c1 = %c, c2 = %c\n", c1, c2);
    
    swap(&num1, &num2, sizeof(int));
    swap(&f1, &f2, sizeof(float));
    swap(&c1, &c2, sizeof(char));
    
    printf("\nAfter swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("f1 = %.2f, f2 = %.2f\n", f1, f2);
    printf("c1 = %c, c2 = %c\n", c1, c2);
    
    return 0;
}
