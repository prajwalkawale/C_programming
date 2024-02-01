// Find the salted form of a password entered by user if salt is "123" and added at the end  
#include <stdio.h>
void solting(char password[]);
#include <string.h>

int main(){
    char password[100];
    scanf("%s",password);
    solting(password);
    return 0;
}

void solting(char password[]){
    char salt[]="123";
    char newPassword[200];

    strcpy(newPassword,password); // user pass copying in new pass
    strcat(newPassword,salt);// now new pass concatenate with salt 
    puts(newPassword);
}