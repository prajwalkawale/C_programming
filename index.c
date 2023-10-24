#include <stdio.h>
int main() {
    int chemistry=100,math=100,physics=100;
    printf("Enter marks of chemistry \n");
    scanf("%d",&chemistry);
    printf("Enter the marks of mathematics \n");
    scanf("%d",&math);
    printf("Enter the marks of physics \n");
    scanf("%d",&physics);
    if(chemistry,math,physics>=35 && chemistry,math,physics<=100){
        printf("congratulations");
    }
    else{
        printf("you are failled or recheck your marks!!\n");
    }

    int num ,cub;
    printf("Enter the number!!\n");
    scanf("%d",&num);
    cub = num*num*num;
    printf("the cube of your number is:: \n %d",cub);
    return 0;
}