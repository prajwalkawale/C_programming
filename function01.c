#include <stdio.h>
int sum(int a , int b);
void table(int user);
int main(){
    int a , b;
    int total;
    int user;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    total = sum(a,b);
    printf("the sum of A & B is: %d \n",total);

    printf("Enter a number for table: ");
    scanf("%d",&user);
    table(user);
    return 0;
}
int sum(int x , int y){
    return x + y ;
}
void table(int user){
    for(int i=1;i<=10;i++){
         printf("%d \n",i*user);
    }
}