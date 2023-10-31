#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number \n");
    scanf("%d\n",&a);
    int sum =0;
    for (int i =1;i <= a;i++)
    {
       sum = sum + i;
    }
     printf("%d",sum);
    return 0;
}