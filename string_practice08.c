//check if given charecter prasent in a string or not
#include <stdio.h>

void Check(char arr[],char ch);

int main(){
    char str[]="Hello Microsoft!!";
    printf("Enter a charecter : ");
    char ch;
    scanf("%c",&ch);

    Check(str,ch);
    return 0;
}

void Check(char arr[],char ch){
    for(int i=0;arr[i] !='\0';i++){
        if(arr[i]==ch){
            printf("The charecter %c is prasent in a string !",ch);
            return ;
        }
    }
    printf("The charecter %c is not prasent in a string !",ch);
}