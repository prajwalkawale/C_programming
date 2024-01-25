//In an array of numbers , find how many times does a number 'x' occure

#include <stdio.h>

int occurNumber(int arr[],int size , int x);

int main() {
    int x;
    int numbers[]={1,5,2,3,8,4,6,4,3,4};
    int Nsize = 10;
    printf("Enter a number :");
    scanf("%d",&x);
    int occurence = occurNumber(numbers,Nsize,x);
    printf("the number of occurence : %d\n",occurence);
    return 0;
}

int occurNumber(int arr[],int size,int x){
    int count = 0;
    for(int i=0;i<size;i++){

    if(arr[i]==x){
        count++;
    }

    }
    return count;
}