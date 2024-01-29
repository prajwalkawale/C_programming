#include <stdio.h>

int main(){
    int a1[50],a2[50];
    int n;
    printf("Enter the size of an array :");
    scanf("%d",&n);
    printf("Enter an element of an array :");
    for(int i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    printf("\n You have entered these elements: ");
    for(int i=0;i<n;i++){
        printf("%d\t",a1[i]);
    }
    printf(" \n Copying the A1 array into the A2 array: ");
    for(int i=0;i<n;i++){
        a2[i]=a1[i];
    }

    printf(" \n The copied array elements are: ");
    for(int i=0;i<n;i++){
        printf("%d \t",a2[i]);
    }
    return 0;
}