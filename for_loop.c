#include <stdio.h>
int main()
{
    // the table of inpute that will be given by user 

    int n;
    printf("Enter the number ::");
    scanf("%d", &n);
    printf("Here are the following your table!! \n");
    for (int i = 1; i <=10; i++)
    {
        printf("%d\n",n*i);
    }

    // printing the numbers 0 to n which will be given by user!!
    int number;
    printf("Enter the number!!");
    scanf("%d",&number);
    for(int i = 0; i<=number;i++){
        printf("%d\n",i);
    }
    return 0;
}