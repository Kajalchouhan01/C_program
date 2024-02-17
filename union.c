#include<stdio.h>

    // Define a union to store student information
    union StudentUnion {
    char name[50];
    int rollNumber;
    float marks;
};
    int main(){
    // Using union
    printf("\nUsing Union:\n");
    union StudentUnion studentUnion;

    printf("Enter student name: ");
    fgets(studentUnion.name, sizeof(studentUnion.name), stdin);
    printf("Name: %s\n", studentUnion.name); 

    printf("Enter roll number: ");
    scanf("%d", &studentUnion.rollNumber);
    printf("Roll Number: %d\n", studentUnion.rollNumber);
    
    printf("\nEnter marks: ");
    scanf("%f", &studentUnion.marks);
    printf("Marks: %.2f\n", studentUnion.marks);

    return 0;
}

