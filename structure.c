#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student p1;
    p1.roll = 1562;
    p1.cgpa = 9.2;
    strcpy(p1.name,"clay");

    printf("%d",p1.roll);
    
    return 0;
}