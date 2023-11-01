// here is a another way to print inverted pyramid
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number for print the inverted pyramid \n");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("End..");

    // Right Half Pyramid
    int user;
    printf("Enter a number for print right half pyramid::\n");
    scanf("%d", &user);
    for (int i = 1; i <= user; i++)
    {
        for (int j = 1; j <= user; j++)
        {
            if (i + j <= user)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("End..");

    return 0;
}