#include <stdio.h>
int main(){
    int chem , math , physics, biology , english ;
    printf("ENTER YOUR MARKS CHEMISTRY MARKS::\n ");
    scanf("%d",&chem);
    printf("ENTER YOUR MATHEMATICS MARKS:: \n");
    scanf("%d",&math);
    printf("ENTER YOUR PHYSICS MARKS:: \n");
    scanf("%d",&physics);
    printf("ENTER YOUR BIOLOGY MARKS:: \n");
    scanf("%d",&biology);
    printf("ENTER YOUR ENGLISH MARKS::\n");
    scanf("%d",&english);
    if(chem,math,physics,biology,english>=35&&chem,math,physics,biology,english<0 ||chem,math,physics,biology,english>101){
         printf("sorry you have given wrong marks:: \n");
    }else if (chem,math,physics,biology,english>=35){
       printf("congratulations you have cleared the examination ::");
    }else
    {
        printf("YOU ARE FAILED");
    }
    return 0 ;
}