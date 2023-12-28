#include <stdio.h>
float fahrenheit(float celcious);
int calculatePercentage(int math , int biology , int chemistry ,int physics );
void main(){
    float celcious ;
    printf("Enter a number: ");
    scanf("%f",&celcious);
    float final = fahrenheit(celcious);
    printf("the fahrenheit tem: %f \n",final);
    //Calculate the percentage of students in their subjects
    int math , biology , chemistry , physics ;
    printf("Enter the marks of Mathematics: ");
    scanf("%d",&math);
    printf("Enter the marks of biology: ");
    scanf("%d",&biology);
    printf("Enter the marks of chemistry: ");
    scanf("%d",&chemistry);
    printf("Enter the marks of physics: ");
    scanf("%d",&physics);
    int finalPercentage = calculatePercentage(math,biology,chemistry,physics);
    printf("the percentage of studen is: %d",finalPercentage); 
}

float fahrenheit(float celcious){
    float total = celcious*(9.0/5.0)+32;
    return total ;
}

// calculate the percentage of students in math , chemistry , physics, biology

int calculatePercentage(int math , int biology , int chemistry , int physics){
    int percentage = (math + biology + chemistry + physics)/4 ;
    return percentage ;
}