#include <stdio.h>

int main()
{
    char arr[100];
    char chr;
    int i = 0;
    printf("Enter a charector : ");
    while (chr != '\n')
    {
        
        scanf("%c", &chr);
        arr[i] = chr;
        i++;
    }
    arr[i] = '\0';
    printf("%s", arr);
    return 0;
}