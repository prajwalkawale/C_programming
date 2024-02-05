#include <stdio.h>
#include <string.h>
typedef struct computeScienceStudent{
char name[100];
int rollnumber;
char address[100];
float cgpa;
}coa; //<- it is know as alias (nickname)


int main(){
     coa c1;
     strcpy(c1.name,"Clay Jenson ");
     strcpy(c1.address,"USA");
     c1.rollnumber = 145;
     c1.cgpa = 9.3;


     printf("%s\n",c1.name);
     printf("%d \n",c1.rollnumber);
     printf("%s\n",c1.address);
     printf("%f \n",c1.cgpa);
    return 0;
}