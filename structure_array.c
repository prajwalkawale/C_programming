#include <stdio.h>
#include <string.h>

struct student{
char name[100];
int roll;
char address[100];
};

int main() {

    struct student ECE[3];
    strcpy(ECE[0].name,"harry");
    strcpy(ECE[0].address,"California");
    ECE[0].roll=123;

    printf("%s \n",ECE[0].name);
    printf("%d \n",ECE[0].roll);
    printf("%s \n",ECE[0].address);

printf("\n");
// Initialization of structure array

struct student s1={"Clay jenson",142,"India"};

printf("The name of student is : %s \n",s1.name);
printf("The Roll no. of student is : %d \n",s1.roll);
printf("Adress of the student is : %s\n",s1.address);

// Pointers to structures
struct student *ptr = &s1;
printf("Roll number of student with the help of pointers : %d\n",(*ptr).roll);
printf("Adress of roll number : %u\n",&s1.roll);

// Arrow Operator

printf("The Roll number of student using arrow operator is : %d \n",ptr->roll);
    return 0;
}