#include <stdio.h>
#include <string.h>
int countLength(char arr[]);
int main(){
    char name[100];
    printf("Enter user name : ");
    fgets(name,100,stdin);
    printf("the lenght of the your name is : %d",countLength(name));

printf("\n");
    // Pre defined library

    char name2[]="Hello";
    int length = strlen(name2);
    printf("%d",length);

printf("\n");
    // Copy string value

    char newString[]="New String";
    char oldString[]="Old String";

    strcpy(newString,oldString);
    printf("%s",newString);
    return 0;
}





int countLength(char arr[0]){
    int count =0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}