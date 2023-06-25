#include <stdio.h>
#define MAX_SIZE 100 
int main() {
    int n;
    int arr[MAX_SIZE];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n/2; i++) {
        int tmp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=tmp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}