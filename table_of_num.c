#include <stdio.h>
int  main()
{
    int num; 
    int total;
    printf("Enter a number for the table::");
    scanf("%d",&num);
    for(int i = 1 ; i<=10;i++){
        total = num*i;
        printf("%d\n",total);
    }
}