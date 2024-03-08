#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("sum_number02.txt","r");
    int a;
    fscanf(fptr,"%d",&a);
    int b;
    fscanf(fptr,"%d",&b);

    fclose(fptr);

    fptr = fopen("sum_number02.txt","w");

    fprintf(fptr,"%d",a+b);

    fclose(fptr);
    return 0;
}