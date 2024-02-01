#include <stdio.h>
void printstring(char arr[]);
int main()
{
    // char letter[50];
    char letter[] = "hello c language";
    // There is no need to declare the size of an array ,
    // compiler will atomatically consider its size and add the null value at the end of the array's position.
    char alphabet[] = "Hello Alphabate!!";
    printstring(alphabet);
printf("\n");
    char User[100];
    printf("Enter user's name : ");
    scanf("%s",User); // scanf()cannot input multi-word strings with spaces 

    printf("The User's name is : %s",User);

    char name[100];
    //gets(name); 
    //puts(name);
    fgets(name,100,stdin);
    puts(name);
    return 0;
}

void printstring(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
}