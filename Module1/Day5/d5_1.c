#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box *boxPtr) {
    double volume = boxPtr->length * boxPtr->width * boxPtr->height;
    return volume;
}

double calculateSurfaceArea(struct Box *boxPtr) {
    double surfaceArea = 2 * (boxPtr->length * boxPtr->width +
                              boxPtr->length * boxPtr->height +
                              boxPtr->width * boxPtr->height);
    return surfaceArea;
}

int main() {
    struct Box myBox;

    printf("Enter the length of the box: ");
    scanf("%lf", &myBox.length);

    printf("Enter the width of the box: ");
    scanf("%lf", &myBox.width);

    printf("Enter the height of the box: ");
    scanf("%lf", &myBox.height);

    struct Box *boxPtr = &myBox;

    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);

    printf("Volume : %.2f\n", volume);
    printf("Surface area: %.2f\n", surfaceArea);

    return 0;
}
