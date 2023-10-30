#include <stdio.h>
int main(){
    int n ;
    printf("Enter a number for print star!! \n");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j = 1 ; j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("END!!");
    return 0;
}