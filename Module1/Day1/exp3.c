/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int rollNo;
    char name[100];
    float physicsMarks, mathMarks, chemistryMarks;
    
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    
    printf("Enter Name: ");
    scanf(" %[^\n]s", name);
    
    printf("Enter Marks in Physics: ");
    scanf("%f", &physicsMarks);
    
    printf("Enter Marks in Math: ");
    scanf("%f", &mathMarks);
    
    printf("Enter Marks in Chemistry: ");
    scanf("%f", &chemistryMarks);
    
    float totalMarks = physicsMarks + mathMarks + chemistryMarks;
    float percentage = (totalMarks / 300) * 100;
    
    printf("\nSummary:\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    
    return 0;
}
