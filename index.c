#include <stdio.h>
void main() {
    int chemistry=100,math=100,physics=100;
    printf("Enter marks of chemistry \n");
    scanf("%d",&chemistry);
    printf("Enter the marks of mathematics \n");
    scanf("%d",&math);
    printf("Enter the marks of physics \n");
    scanf("%d",&physics);
    if(chemistry,math,physics>=35){
        printf("congratulations");
    }
    else{
        printf("you are failled");
    }
}