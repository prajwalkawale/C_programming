#include <stdio.h>
#include <string.h>
int main()
{

    char str1[100] = "Hello ";
    char str2[] = "World";
    // puts(str1);
    printf("%s", strcat(str1, str2));
    printf("\n");


    // string Comparison

    char string1[] = "hello";
    char string2[] = "world";
    char string3[] ="hello";
    char string4[] = "hello";
    printf("%d \n", strcmp(string2,string1));
    printf("%d \n", strcmp(string3,string4));
     return 0;
}