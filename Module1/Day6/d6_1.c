#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStudents(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

void displayStudents(const struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

void sortStudentsByMarks(struct Student* students, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int searchStudentByName(const struct Student* students, int size, const char* name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i; 
        }
    }
    return -1;  
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    printf("Enter the student details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &(students[i].rollno));
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &(students[i].marks));
        printf("\n");
    }

    printf("-----------------------------\nInitialized Student Details:\n");
    displayStudents(students, size);

    printf("-----------------------------\nSorting students by marks...\n");
    sortStudentsByMarks(students, size);

    printf("-----------------------------\nSorted Student Details:\n");
    displayStudents(students, size);

    char searchName[20];
    printf("-----------------------------\nEnter the name to search: ");
    scanf("%s", searchName);

    int searchIndex = searchStudentByName(students, size, searchName);
    if (searchIndex != -1) {
        printf("Student found at index %d.\n", searchIndex);
        printf("Roll No: %d\n", students[searchIndex].rollno);
        printf("Name: %s\n", students[searchIndex].name);
        printf("Marks: %.2f\n", students[searchIndex].marks);
    } else {
        printf("Student not found.\n");
    }
    free(students);
    return 0;
}
