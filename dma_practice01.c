// WAP to allocate memory to store 5 prices 

#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    ptr[0] = 100.25;
    ptr[1] = 111.4;
    ptr[2]=142.3;
    ptr[3]=111.2;
    ptr[4]=521.21;

    for(int i=0;i<5;i++){
        printf("%f \n",ptr[i]);
    }
    return 0;
}