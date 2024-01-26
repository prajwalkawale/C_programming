//Write a code to store elements of an array along with the size of the array.
#include <stdio.h>

int main(){
    int array[20];
    int size;
    int i;
    printf("Enter the size of an array : ");
    scanf("%d",&size);
    printf("Enter the elements of an array: ");
    for( i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("the element of an arrays are : ");
    for(i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
    return 0;
}