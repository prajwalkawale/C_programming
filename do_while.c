#include <stdio.h>
int main()
{
    int i=0;
    int a;
    printf("Enter a number!! \n");
    scanf("%d",&a);
    do
    {
        printf("%d \n", i);
        i++;
    } while (i <= a);

    char letter ='a';
    do
    {
        printf("%c \n",letter);
        letter++;
    } while (letter<='z');
    
printf("End!!");
}