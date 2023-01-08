// Make a program to input student information from a user & enter it to a file

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr =  fopen("Student.txt", "w");
    
    char name[100];
    int age;
    float cgpa;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student Name: %s\n", name);
    fprintf(fptr, "Student Age: %d\n", age);
    fprintf(fptr, "Student CGPA: %f\n", cgpa);

    return 0;
}