#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};

struct person{
    char name[100];
    int age ;
    char address[200];
};

int main() {
    struct student p1;
    p1.roll = 1562;
    p1.cgpa = 9.2;
    strcpy(p1.name,"clay");

    printf("%d",p1.roll);
printf("\n");
    struct person s1;
    strcpy(s1.name,"Clay jenson");
    s1.age = 23;
    printf("%d \n",s1.age);
    strcpy(s1.address,"california \n");
    printf("%s",s1.address);
    printf("%s",s1.name);

    
    return 0;
}