#include <stdio.h>

int main(){
    int student[2][3];
    student[0][0]=100;
    student[0][1]=90;
    student[0][2]=70;

    student[1][0]=10;
    student[1][1]=40;
    student[1][2]=60;

    printf("%d \n",student[0][1]); // 90 

    return 0;
}