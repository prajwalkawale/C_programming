#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number for print the number pattern:: \n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // Inverted printing the numbers

    int user;
    printf("Enter a number for print the inverted number pattern");
    scanf("%d", &user);
    for (int i = 1; i <= user; i++)
    {
        for (int j = user; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // Printing number in row wise left half pyramid

    int num02;
    printf("Enter a number for print the number pyramid::");
    scanf("%d", &num02);
    for (int i = 1; i <= num02; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}