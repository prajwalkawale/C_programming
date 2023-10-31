#include <stdio.h>
int main(){
    int n;
    do{
        printf("Enter a number::");
        scanf("%d",&n);
        printf("%d \n",n);
        if(n%2!=0){
            break;
        }
    }while (1);
    printf("You have entered odd number thank you....");
    return 0;
}