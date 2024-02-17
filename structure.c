#include <stdio.h>

// Define a structure to store student information
struct StudentStruct {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    // Using Structure
    printf("Using Structure:\n");
    struct StudentStruct studentStruct;

    printf("Enter student name: ");
    fgets(studentStruct.name, sizeof(studentStruct.name), stdin);
    
    printf("Enter roll number: ");
    scanf("%d", &studentStruct.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &studentStruct.marks);

    printf("\nStudent Information using Structure:\n");
    printf("\nName: %s", studentStruct.name);
    printf("Roll Number: %d\n", studentStruct.rollNumber);
    printf("Marks: %.2f\n", studentStruct.marks);

return 0;
}
