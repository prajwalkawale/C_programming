#include <stdio.h>

int main(){
    int arr[50],pos,size;
    printf("Enter the size of an array :\n");
    scanf("%d",&size);
    printf("Enter an element in the array :\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("You have entered these elements : \n");
    for(int i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }
    
    printf("\n");

    printf("Enter the position to delete the element of an array : \n");
    scanf("%d",&pos);
for(int i=pos-1;i<size-1;i++){
    arr[i]=arr[i-1];
}
printf("After the deletion of the element the remaining elements are : \n");
for(int i=0;i<size;i++){
    printf("%d \t",arr[i]);
}
    return 0;
}