//write a program to calculate perimeter of rectangle. take side a and b from the user

#include <stdio.h>

int main(){
    float a;
    float b;
    float perimeter;

    printf("Enter the side of ractangle a : ");
    scanf("%f",&a);
    printf("Enter the side of rectangle b : ");
    scanf("%f",&b);

    perimeter = 2*(a+b);
    printf("%f",perimeter);
    return 0;
}