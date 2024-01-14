#include <stdio.h>

void square(int n);
void square_1(int *n);

int main(){
    int number ;
    int ptr;
    number = 4;
    square(number); //call by value function create copy of that value
    printf("Number = %d\n",number); // that why here orignal value will print 

    square_1(&number);
    printf("Number = %d\n",number);
    return 0;
}

void square(int n){
    n = n*n;
    printf("square = %d\n",n);
}

void square_1(int *n){
    *n = (*n)*(*n);
    printf("square = %d\n",*n);
}