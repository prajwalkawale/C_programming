#include <stdio.h>
void myfunction1();
void myfunction2();
void country1();
void country2();
int main()
{
    char user;
    printf("Enter 'I' for Indian or 'A' for America: ");
    scanf("%c", &user);
    if (user == 'I')
    {
        country1();
    }else if(user!='I'&& user!='A'){
        printf("You have Entered wrong input!\n");
    }
    else
    {
        country2();
    }
    myfunction1();
    return 0;
}
void myfunction1()
{
    printf("Hello! \n");
}
void myfunction2()
{
    printf("Goodbye! \n");
}
void country1()
{
    printf("Namaste! \n");
    myfunction1();
}
void country2()
{
    printf("Welcome! \n");
    myfunction2();
}