#include <stdio.h>
int main(){
    int a = 22;
    int b = 23;
    int *ptr = &a;
    int *_ptr=&b;
    printf("pointer a is %u \n",ptr);
    *ptr++; // it will increase by 4 bytes 
    printf("pointer a is %u \n",ptr);
    ptr--; // it will decrease by 4 bytes 
    printf("pointer a is %u",ptr);

    // comparison will print true or false in 1's and 0's form 

    *ptr = &b;
    printf("comparision Pointer a with pointer b %u\n",ptr==_ptr);
    return 0;
}