#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Your Marks \n");
    scanf("%d", &marks);
    // if (marks >= 30 && marks < 100)
    // {
    //     printf("You are succesfully cleared the examination");
    // }
    // else if (marks >= 101)
    // {
    //     printf("your marks are wrong!!");
    // }
    // else
    // {
    //     printf("You are failed!!");
    // }
    // return 0;

    if(marks>=35 && marks<=50){
        printf("you are passed with grade C");
    }else if(marks>50 && marks<=60){
        printf("you are passed with grade B");
    }else if(marks>60 && marks<=70){
        printf("you are passed with grade B+");
    }else if(marks>70 && marks<=80){
        printf("you are passed with grade A");
    }else if(marks>80 && marks<=90){
        printf("you are passed with grade A+");
    }else if(marks>90 && marks<=100){
        printf("you are passed with grade O+ !!");
    }else if(marks<35){
        printf("you are failed!! \n");
    }else{
        printf("sorry you have entered wrong marks::: \n");
    }

// SHORT HAND OPERATORS ::
int score ;
printf("Enter marks!! \n");
scanf("%d",&score);
score>50 ? printf("Cleared!!"):printf("failed!!");
return 0 ;
}

