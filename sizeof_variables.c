#include <stdio.h>
void main()
{
    int myVariable;
    float myVariable2;
    double myVariable3;
    char myVariable4;
    printf("%lu\n", sizeof(myVariable));
    printf("%lu \n", sizeof(myVariable2));
    printf("%lu \n", sizeof(myVariable3));
    printf("%lu \n", sizeof(myVariable4));

    // Note that we use the %lu format specifer to print the result, instead of %d. 
    //It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), instead of int (%d).
    // On some computers it might work with %d, but it is safer to use %lu.

    // boolean expressions 
printf("\n");
printf("\n");
    int a = 5;
    int b = 10 ;
    printf("%d \n", a<b); 
}