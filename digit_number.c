#include <stdio.h>
void main(){
    char ab ;
    printf("ENTER THE CORRECT NUMBER!! \n");
    scanf("%c",&ab);
    if (ab>=0 && ab<=9)
    {
        printf("this is correct number!! %c \n",ab);
        }
        else{
            printf("this is charector!!");
        }
}