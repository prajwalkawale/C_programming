#include <stdio.h>
void helloRecursion(int count);
// sum of natural number (n)
int sumOfn(int n);

// factorial of natural (n) numbers
int fact(int user);
int main()
{
    helloRecursion(5);

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int naturalSum = sumOfn(n);
    printf("%d \n",naturalSum);

    int user ;
    printf("Enter a number: ");
    scanf("%d",&user);
    int finalFactorrial = fact(user);
    printf("%d \n",finalFactorrial);
    return 0;
}

void helloRecursion(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello Recursion \n");
    helloRecursion(count - 1);
}
// sum of n

int sumOfn(int n){
    if(n==1){
        return 1;
    }
   int sum = sumOfn(n-1);
   int finalsum = sum + n;
   return finalsum ;
}

// factorial of natural number

int fact(int user){
    if(user==0){
        return 1 ;
    }
    int fact1 = fact(user - 1);
    int finalfact = fact1 * user ;
    return finalfact ;
}
