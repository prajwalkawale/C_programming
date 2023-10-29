#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number!! \n");
    scanf("%d", &number);

    if (number >= 1)
    {
        printf("IT IS A NATURAL NUMBER !! \n");
        if (number % 2 == 0)
        {
            printf("IT IS A EVEN NUMBER!! \n");
        }
        else if (number / 1 && number / number)
        {
            printf("IT IS A PRIME NUMBER!! \n");
            if (number % 2 != 0)
            {
                printf("IT IS A ODD NUMBER!!");
            }
        }
    }
    else if (number <= 0)
    {
        printf("IT IS NOT NATURAL NUMBER!! \n");
    }

    return 0;
}