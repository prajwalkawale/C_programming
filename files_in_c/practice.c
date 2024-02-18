#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("start.txt","r");

    char ch;
   
    ch = fgetc(fptr);

    while(ch !=EOF){
         printf("%c",ch);
        ch = fgetc(fptr);
    }

 int n;
    n = fgetc(fptr);
    while(n !=EOF){
        printf("%d",n);
        n = fgetc(fptr);
    }

// int n;
// fscanf(fptr,"%d",n);
// printf("%d",n);
// fscanf(fptr,"%d",n);
// printf("%d",n);
// fscanf(fptr,"%d",n);
// printf("%d",n);
// fscanf(fptr,"%d",n);
// printf("%d",n);
// fscanf(fptr,"%d",n);
// printf("%d",n);
    fclose(fptr);
    return 0;
}