// Make programme to read 5 intigers from a file

#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("practice.txt","r");

    int n;
    fscanf(fptr,"%d",&n);
    printf("Number : %d\n",n);
     fscanf(fptr,"%d",&n);
    printf("Number : %d\n",n);
     fscanf(fptr,"%d",&n);
    printf("Number : %d\n",n);
     fscanf(fptr,"%d",&n);
    printf("Number : %d\n",n);
    fscanf(fptr,"%d",&n);
    printf("Number : %d\n",n);

    fclose(fptr);
    return 0;
}