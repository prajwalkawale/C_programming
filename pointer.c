#include <stdio.h>

int main(){
    int age = 23;
    int *ptr = &age;
    int _age = *ptr;

    printf("value of age : %d \n",age);
    printf("the address of age : %p\n",&age);
    printf("the address of age : %u\n",&age);
    printf("the address of ptr is : %p \n",&ptr);
    printf("the value of age stored in ptr: %d \n",*ptr);

    int *ptr2;
    int x;
    ptr2 =&x;
    *ptr2 = 0;
    printf("the value of x is %d \n",x);

    *ptr2 +=5;
    printf("the value of x increased by :%d\n",x);
    printf("the value of x increased by :%d\n",*ptr2);

    (*ptr2)++;
    printf("increment by 1: %d \n",*ptr2);
    int **pptr = &ptr2;
printf(" Pointer to pointer : %d \n",**pptr);
printf(" Pointer to pointer : %p \n",&pptr);
    return 0;
}