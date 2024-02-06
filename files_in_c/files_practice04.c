// Make a program to input student information from user and enter it into file
#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("Student_info", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter the information of student : \n");
    scanf("%s", name);
    printf("Enter the information of student :");
    scanf("%d", &age);
    printf("Enter the information of student :");
    scanf("%f", &cgpa);

    fprintf(fptr, "%s \t", name);
    fprintf(fptr, "%d \t", age);
    fprintf(fptr, "%f \t", cgpa);

    fclose(fptr);
    return 0;
}