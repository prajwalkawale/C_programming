// Advantage of recursion 

// this is a exaple of iteration 
#include <stdio.h>
int fact(int n); // iteration 
int fact1(int user); // recursion 
int main(){
    printf("%d \n",fact(5));
    printf("%d\n",fact1(5));
    return 0;
}

int fact(int n){
    int res = 1;
    while(n!=0){
        res = res * n;
        n--;
    }
    return res;
}

int fact1(int user){
    if(user==1){
        return 1;
    }else 
    return user * fact1(user - 1); //Recursion  
}