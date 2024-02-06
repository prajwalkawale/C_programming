#include <stdio.h>


int main(){
    FILE *fptr;
    fptr=fopen("text.txt","w");

    fprintf(fptr,"%c",'M');
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'O');

    // another method for write 

    fputc('A',fptr);
    fputc('P',fptr);
    fputc('P',fptr);
    fputc('L',fptr);
    fputc('E',fptr);

    fclose(fptr);
    return 0;
}