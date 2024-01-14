#include <stdio.h>

void number(int a ,int b);

int main(){
    int x = 4;
    int y = 6;
    printf("the value of X =%d and Y =%d \n",x,y);
    number(x,y);

    return 0;
}

void number(int a , int b){
    int t = a;
     a = b;
   b = t;
   printf("the value of x =%d and y = %d \n",a,b);
}
