// there are two types of conversions 1.implicit conversion 2. explicit conversion 

//Implicit conversion is done automatically by the compiler when you assign a value of one type to another.

#include <stdio.h>
void main() {
    int implicitNumber = 3.5 ; // by automatically it will print only 3 value
    printf("%d \n",implicitNumber);

    float number2 = 3 ;     // this output will be automatically ganerate in the flaot value 
    printf("%f \n",number2); 
    
    int divison = 5/2 ; 
    printf("%d \n",divison);

    float divison2 = 5/2;
    printf("%f \n",divison2); // answer should be print 2.5 but it will print 2.00 couse of value itself in integer form
    //tself automatically it is known as implicit conversion


    // Explicit conversion 
    //Explicit conversion is done manually by placing the type in parentheses () in front of the value.

    float number3 = (float) 5/2;
    printf("%f \n",number3);

    int num1 = 5;
    int num2 = 2;
    float total = (float) num1/num2;
    printf("%f \n",total);
}