#include <stdio.h>

void number(int array[],int n);// void number(int *array ,int n);

int main(){
    int number_[] = {12,23,34,46,54};
    number(number_,5);
    return 0;
}

void number(int array[],int n){ // void number(int *array , int n);
    for(int i =0;i<n;i++){
        printf("%d \t",array[i]);
    }
    printf("\n");
}