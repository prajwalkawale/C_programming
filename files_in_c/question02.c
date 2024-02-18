// Replace data in the file question01 with the number of vowels in the string

#include <stdio.h>

int main(){

    FILE *fptr;

    fptr = fopen("question01.txt","w");
    int n;
    for(int i=0;i<=EOF;i++){
        int count =0;
        if(n=='a'|| n=='u'|| n=='e' || n=='i'|| n=='o'){
            count++;
        }
        fprintf(fptr,"%d",count);
    }
   
    fclose(fptr);
    return 0;
}