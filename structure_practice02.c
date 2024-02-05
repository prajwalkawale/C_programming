// Creat a structure to store vectors. Then make a function to return sum of 2 vectors 

#include <stdio.h>

struct vector{
    int x;
    int y;
};

int sumVector(struct vector v1,struct vector v2,struct vector sum);
int main(){

    struct vector v1={8,6};

    struct vector v2={4,6};

    struct vector sum = {0};

sumVector(v1, v2,sum);
    return 0;
}

int sumVector(struct vector v1,struct vector v2,struct vector sum){
    sum.x =v1.x+v2.x;
    sum.y =v1.y+v2.y;

    printf("sum of x is %d \n",sum.x);
    printf("sum of y is %d \n",sum.x);
}