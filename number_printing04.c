#include <stdio.h>
int main()
{
    int user;
    printf("Enter a number ::");
    scanf("%d", &user);
    int num = 1;
    for (int i = 1; i <= user; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d", num);
            num++;
        }
        printf("\n");
    }

    // Star Pyramid Pattern

    int rows;
    printf("Enter a number of rwos::");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int s = 1; s <= rows - i; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // PRINTING PYRAMID
    int num02;
    printf("Enter a number of rows::");
    scanf("%d", &num02);
    for (int i = 1; i <= num02; i++)
    {
        for (int s = 1; s <= num02 - i; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}