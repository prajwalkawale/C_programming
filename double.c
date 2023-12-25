#include <stdio.h>
void main() {
    char myString[] = "Hello world";
    printf("%s \n", myString);

    double myNumber = 12.25 ;
    printf("%lf \n" ,myNumber);

    float number = 3.2; // if you directly print the floating value then it will give you in output extra decimal '0'
    printf("%f\n",number); // for avoiding that '0' you can declare '.' after the percentage sign and specifie how many 0 you want to print 
    printf("%.1f \n",number); 
    printf("%.2f \n",number);
    printf("%.3f \n",number);

    int myRollnumber[]={23,25,36,41,22};
    for(int i=0;i<=4;i++){
        printf("%i \n",myRollnumber[i]);
    }
}