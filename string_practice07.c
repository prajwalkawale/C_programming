//Write a function to count the occurence of vowels in a string

#include <stdio.h>

int countVowels(char arr[]);
int main(){
    char str[]="Hello World";
   printf("vowels appeared in your statement : %d", countVowels(str));
    return 0;
}

int countVowels(char arr[]){
    int count =0;
    for(int i=0;arr[i] != '\0';i++){
        if(arr[i]=='a' || arr[i]=='i' || arr[i]=='o'||arr[i]=='u'|| arr[i]=='e'){
            count++;
        }
    }
    return count;
}