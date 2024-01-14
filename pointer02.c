#include <stdio.h>
int main(){
    int a = 20;
    int *ptr = &a;
    int **pptr = &ptr; 
    printf("the value of a is : %d \n",a);
    printf("the value of location a is %d \n",*ptr);
    printf("The location memory number is %d \n",**pptr);
    return 0;
}