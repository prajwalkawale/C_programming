#include <stdio.h>
int main() {
    int n ,a =0, b , c ;
    printf("Enter any number \n");
    scanf("%d",&n);

    c = n ;

    while(n>0){
        b = n % 10 ;
        a = (b*b*b)+a;
        n = n / 10;
    }
    if(c==a){
        printf("This is armstrong number!!");
    }else if(n<0){
        printf("it is wrong input");
    }
    else{
        printf("This is not armstrong number");
    }
}