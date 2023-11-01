#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number for print star!! \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("END!! \n");
    printf("\n");
    // Left Half Pyramid 

    int user;
    printf("Enter a number for print Half pyramid \n");
    scanf("%d",&user);
    for (int i = 1; i <= user; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("End...\n");

    // Inverted Half Pyramid 

    int n03;
    printf("Enter a number for print vertical pyramid:: \n");
    scanf("%d",&n03);
    for(int i=1;i<=n03;i++){
        for(int j=n;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    printf("End..\n");
    return 0;
}