//Create an array of size 5(using calloc)& Enter its values from the user.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    
    ptr = (int *)calloc(5,sizeof(int));
    printf("Enter five numbers: ");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<5;i++){
        printf("%d \n",ptr[i]);
    }
    return 0;
}