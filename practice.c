#include <stdio.h>
//write a program in c to find the maximum number between two numbers using  a pointers 

int maxNumber(int *num1 ,int *num2);

int main(){
    int num1 ,num2;
    printf("Enter two numbers : ");
    scanf("%d",&num1);
     printf("Enter two numbers : ");
    scanf("%d",&num2);
    int final = maxNumber(&num1 , &num2);
    printf("the max number is %d \n",final);
    return 0;
}

int maxNumber(int *num1 , int *num2){
    if(*num1>*num2){
        return *num1;
    }else {
        return *num2;
    }
}