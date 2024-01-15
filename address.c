#include <stdio.h>

void number(int n);
void _number(int *a);

int main(){
    int n = 4;
    printf("%p \n",&n);
    number(n); // call by value

     int a = 4;
     printf("%p \n",&a);
     _number(&a);  //call by referene 
    return 0;
}

void number(int n){
    printf("%p \n",&n);
}

void _number(int *a){
    printf("%p \n",a);
}