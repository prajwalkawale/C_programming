#include <stdio.h>
int main()
{
    int user; 
    unsigned long long factorial = 1; // unsigned long long is the data type for storing and representing long or big number 
    printf("ENTER THE NUMBER FOR KNOW THIER FACTORIAL VALUE!!");
    scanf("%d", &user);
    if (user >0)
    {
        for (int i = 1; i <= user; i++)
        {
            factorial=factorial*i;
        }
        printf("the factoral of %d is %llu \n",user,factorial); // %llu is return for representing the value of unsigned long long value on screen
    }
    else if (user <'0')
    {
        printf("you have entered wrong number!!");
    }

}