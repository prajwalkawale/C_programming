#include <stdio.h>
void main(){
    int studentId = 1234;
     int studentRoll = 2564;
    float studentFees = 25.95;
    char studentGrade = 'B';
    printf("student id is %d \n",studentId);
    printf("the student roll nu0mber is %d \n",studentRoll);
    printf("the student fees is %f \n",studentFees);
    printf("studentGrade is %c \n",studentGrade);

    char string[] = "Hello microsoft!! \n";
    printf("%s",string);
    printf("%c \n",string[1]); // in c language string are actually array so you can access by their index number 
    printf("%c \n",string[2]);

    string[0] = 'B';      // we can change specific charector of string by thier index number 
    printf("%s",string); 

    string[1] = 'a';
    printf("%s",string);

}