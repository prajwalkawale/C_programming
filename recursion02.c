// write a program to print number from 1 to 10 in such a way that 
//when number is odd then add 1 into it and if number is even then substract 1 into it

#include <stdio.h>
void odd();
void even();
int n = 1;
int main()
{
    odd();
    return 0;
}

void odd()
{
    if (n <= 10)
    {
        printf("%d \n", n + 1);
        n++;
        even();
    }
}
void even()
{
    if (n <= 10)
    {
        printf("%d \n", n - 1);
        n++;
        odd();
    }
}