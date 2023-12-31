#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

void swapStructures(struct Person* p1, struct Person* p2) {
    struct Person temp;

    strcpy(temp.name, p1->name);
    strcpy(p1->name, p2->name);
    strcpy(p2->name, temp.name);

    temp.age = p1->age;
    p1->age = p2->age;
    p2->age = temp.age;
}

int main() {
    struct Person person1, person2;

    printf("Enter details for person1:\n");
    printf("Name: ");
    scanf(" %[^\n]s", person1.name);
    printf("Age: ");
    scanf("%d", &person1.age);

    printf("\nEnter details for person2:\n");
    printf("Name: ");
    scanf(" %[^\n]s", person2.name);
    printf("Age: ");
    scanf("%d", &person2.age);

    printf("\nBefore swapping:\n");
    printf("Person1 - Name: %s, Age: %d\n", person1.name, person1.age);
    printf("Person2 - Name: %s, Age: %d\n", person2.name, person2.age);

    swapStructures(&person1, &person2);

    printf("\nAfter swapping:\n");
    printf("Person1 - Name: %s, Age: %d\n", person1.name, person1.age);
    printf("Person2 - Name: %s, Age: %d\n", person2.name, person2.age);

    return 0;
}
