#include <stdio.h>
int main() {
    char ab ;
    printf("Enter any charector!!\n");
    scanf("%c",&ab);
    if(ab>='a'&& ab<='z'){
        printf("It is small letter!!");
    }else if(ab>='A' && ab<='Z'){
        printf("It is capital letter");
    }else{
        printf("wrong inpute you have entered!!");
    }
    printf("\n");
// CHARECTOR
char Ab;
for(char Ab='a';Ab<='z';Ab++){
    printf("%c \n",Ab);
}
    printf("\n");
// FLOAT VALUE 

    float a;
    for(float i = 1.0;i<=5.0;i++){
        printf("%f \n",i);
    }
    return 0 ;
}
