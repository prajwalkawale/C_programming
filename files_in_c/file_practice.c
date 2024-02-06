#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("practice.txt","w");

    char ch;
    while(ch!=EOF){

        fscanf(fptr, "%c",&ch);
    }

    fclose(fptr);
    return 0;
}