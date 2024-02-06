#include <stdio.h>

int main(){
    FILE *fptr;
    FILE *fptr2;
     char ch;
     fptr =fopen("text.txt","r");

     fscanf(fptr,"%c",&ch);

   printf("%c \n",ch);

   // Second method 

  printf("%c \n",fgetc(fptr));
   printf("%c \n",fgetc(fptr));
   printf("%c \n",fgetc(fptr));

     fclose(fptr);

    fptr2 = fopen("newtext.txt","r");

    char ch2;
    ch2 = fgetc(fptr2);

    while(ch2 !=EOF){
        printf("%c",ch2);
       ch2 = fgetc(fptr2);
    }
    printf("\n");

    fclose(fptr2);
    return 0;
}