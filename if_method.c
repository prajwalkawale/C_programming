#include <stdio.h>
int main()
{
    int number;
    printf("ENTER THE NUMBER:::\n");
    scanf("%d", &number);
    if (number>=0)
    {
        printf("IT IS NUMBER \n");
        if (number % 2 == 0)
        {
            printf("THIS IS A EVEN NUMBER!!");
        }
        else
        {
            printf("THIS IS A ODD NUMBER!!");
        }
    }else
    {
        printf("THIS IS NOT A NUMBER");
    }
    return 0;
}