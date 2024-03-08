// Take a number N from user and output it's cub

#include <stdio.h>

int main(){
    int n;
    int output;
    printf("Enter a number : ");
    scanf("%d",&n);
    output = (n*n*n);
    printf("%d",output);
    return 0;
}