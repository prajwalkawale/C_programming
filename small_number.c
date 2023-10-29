#include <stdio.h>
int main() {
    int num1 , num2 ;
    printf("Enter a number!! \n");
    scanf("%d",&num1);
    printf("Enter the second number!! \n");
    scanf("%d",&num2);
    if(num1<num2){
        printf("The number %d is the smallest number then %d",num1,num2);
    }else{
        printf("The number %d is smallest number than %d",num2 , num1);
    }
    return 0 ;
}