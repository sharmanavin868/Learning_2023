#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1;
    int originalNum = num;

    while (divisor <= 1000) {
        int leftPart = num / (divisor * 10);
        int rightPart = num % divisor;

        int newNum = leftPart * divisor + rightPart;

        if (newNum > largest && newNum != originalNum) {
            largest = newNum;
        }

        divisor *= 10;
    }

    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    int largestNum = findLargestNumber(num);
    printf("Largest number after deleting a single digit: %d\n", largestNum);
    return 0;
}
