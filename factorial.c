#include <stdio.h>
void main()
{
    int user, factorial = 1;
    printf("Enter any number which you want to know his factorial value!!\n");
    scanf("%d", &user);
    if (user >= 0)
    {
        for (int i = 1; i <= user; i++)
        {
            factorial=factorial*i;
        }
        printf("your factorial number is \n %d", factorial);
    }
    else
        (
            printf("You have entered wrong value!!"));
}
