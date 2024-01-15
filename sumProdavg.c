#include <stdio.h>
int calculation(int a , int b, int *sum ,int *prod , int *avg);

int main(){
    int a ,b;
    int sum , prod , avg;
    printf("Enter two values : ");
    scanf("%d %d",&a , &b);
    calculation(a,b,&sum ,&prod,&avg); // call by reference 
    printf("the number %d and %d sum is %d and prod is %d and avrage is %d \n",a,b,sum,prod,avg);
return 0;
}

int calculation(int a,int b, int *sum , int *prod , int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a+b)/2;
}