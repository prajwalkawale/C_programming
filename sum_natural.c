#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter a number::");
    scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    // printf("the sum of you number is:: %d \n", sum);

    // for(int i = n ; i>=1;i--){
    //     printf("%d \n",i);
    // }

    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {
        sum = sum + i;
        printf("%d \n", j);
    }
    printf("%d", sum);
    return 0;
}