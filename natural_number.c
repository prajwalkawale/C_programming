#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number!! \n");
    scanf("%d", &number);

    if (number >= 1)
    {
        printf("THIS IS NATURAL NUMBER !! \n");
        if (number % 2 == 0)
        {
            printf("THIS IS EVEN NUMBER!! \n");
        }
        else if (number / 1 && number / number)
        {
            printf("THIS IS PRIME NUMBER!! \n");
            if (number % 2 != 0)
            {
                printf("THIS IS ODD NUMBER!!");
            }
        }
    }
    else if (number <= 0)
    {
        printf("THIS IS NOT NATURAL NUMBER!! \n");
    }

    return 0;
}