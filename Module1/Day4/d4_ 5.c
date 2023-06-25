#include <stdio.h>
#define MAX_SIZE 100 
int main() {
    int n;
    int arr[MAX_SIZE];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    int odds=0, evens=0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(i%2==0)evens+=arr[i];
        else odds+=arr[i];
    }
    if(odds >= evens)
        printf("Difference=%d",odds-evens );
    else
        printf("Difference=%d",evens-odds );
    return 0;
}
