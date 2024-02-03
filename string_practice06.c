// Write a function named slice which takes string and return sliced string form index n to m 
#include <stdio.h>

void slice(char str[],int n,int m);

int main(){
    char microsoft[]="Hellomicrosoft";
    slice(microsoft,2,5);
    return 0;
}


void slice(char str[],int n,int m){
    char newString[100];
    int j=0;
    for(int i=n;i<=m;i++,j++){
        newString[j]=str[i];
    }

    newString[j]='\0';
    puts(newString);
}