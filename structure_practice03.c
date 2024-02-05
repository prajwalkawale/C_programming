// Create a structure to store complex numbers (Use array operator) 
#include <stdio.h>
struct complex {
    int real;
    int imag;
};

int main(){

    struct complex number1;
    printf("Enter a complex number");
    scanf("%d",&number1.real);
    printf("Enter a complex number");
    scanf("%d",&number1.imag);

    struct complex *ptr = &number1;

    printf("the real number part is %d \n",ptr->real);
    printf("the imaginary number part is %d \n",ptr->imag);

    return 0;
}
