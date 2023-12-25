#include <stdio.h>

int main()
{
    int userNumber, a, b = 0, c;
    printf("Enter a correct armstrong number::");
    scanf("%d", &userNumber);
    c = userNumber;
    while (userNumber > 0)
    {
        a = userNumber % 10;
        b = (a * a * a) + b;
        userNumber = userNumber / 10;
        if (c == b)
        {
            printf("This is Armstrong Number!!");
        }
        else
        {
            printf("This is not Armstrong Number!!");
        }
    }
}