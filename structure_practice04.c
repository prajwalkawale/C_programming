// Make a structure to store bank account information of customers of abc bank. also , make an alians for it
#include <stdio.h>
#include <string.h>

typedef struct bank{
    char name[100];
    int acnumber;
    char branch[100];
}acc; 

void printAcc( acc a1);

int main() {
    acc a1={"Clay jenson",4562,"kanpur"};
    acc a2={"henrry jenson",4562,"kanpur"};
    acc a3={"peter poter",4562,"kanpur"};

    printAcc(a1);
    printAcc(a2);
    printAcc(a3);
    return 0;
}


void printAcc( acc a1){
    printf("The account holder name is : %s\n",a1.name);
    printf("The account number is : %d \n",a1.acnumber);
    printf("branch : %s\n",a1.branch);
}

