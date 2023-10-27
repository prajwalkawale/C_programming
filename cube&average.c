#include <stdio.h>
void main(){
    int num , total ;
    printf("Enter any number for knowing cube of that number!!");
    scanf("%d",&num);
    total = (num)*(num)*(num);
    printf("%d here are the cub of the number!! \n",total);

    // PRINTING THE VALUE OF AVERAGE 3 NUMBERS :: 

    int a1 , a2, a3 , average;
    printf("Enter the first number::\n");
    scanf("%d",&a1);
    printf("Enter the second number::\n");
    scanf("%d",&a2);
    printf("Enter the third number::\n");
    scanf("%d",&a3);
    average = a1 + a2 + a3 / 3;
    printf("the average number of 3 is %d\n",average);
}