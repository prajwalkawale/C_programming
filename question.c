//let's assume our user-defined function has a simple  logic that can perform the  addition of two numbers . 
//we call this function in int main() block so how you would construct the logic for calling that user defined function N number of times?

#include <stdio.h>
int sum(int a , int b);
int main() {
   int n;
   printf("Enter a attempt: ");
   scanf("%d",&n);
    int a ,b ;
    int total;
for(int i =1; i<=n;i++){
    printf("Enter a value of A: ");
    scanf("%d",&a);
    printf("Enter a value of B: ");
    scanf("%d",&b);
    total = sum(a,b);
    printf("%d \n",total);
}
    return 0; 
}

int sum(int a , int b){
    return a + b ;
}