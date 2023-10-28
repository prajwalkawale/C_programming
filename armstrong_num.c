#include <stdio.h>
int main()
{
    int userNumber, a, b = 0, c;
    printf("ENTER THE CORRECT NUMBER!!");
    scanf("%d", &userNumber);
    c = userNumber;
    while(userNumber > 0)
    {
        a = userNumber%10;
        b = (a*a*a)+b;
        userNumber = userNumber/10;
    }
    if (c == b)
    {
        printf("This number is armstrong number!!");
    }
    else if(userNumber<0)
    {
        printf("this is wrong input");
    }else{
        printf("this is not armstrong number!!");
    }
    return 0;
}