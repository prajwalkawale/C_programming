// print Nth term of fibonacci
// write the Nth term of fibonacci
#include <stdio.h>
int fibonacci(int n);
int main()
{
    int n = 6;
    printf("the %d term of fibonacci %d",n, fibonacci(6));
    return 0;
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fibN1 = fibonacci(n - 1);
    int fibN2 = fibonacci(n - 2);
    int term = fibN1 + fibN2;
    return term;
}