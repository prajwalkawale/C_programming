#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    char country[100];
};

void studentinfo(struct student s1);

int main()
{
    struct student s1={"Harry poter",1524,"USA"};
    studentinfo(s1);
    return 0;
}

void studentinfo(struct student s1)
{
    // strcpy(s1.name, "Clay Jenson");
    // strcpy(s1.country, "Germany");
    // s1.roll = 1231;
    printf("Information of student \n");
    printf("%s \n", s1.name);
    printf("%d \n", s1.roll);
    printf("%s \n", s1.country);
}