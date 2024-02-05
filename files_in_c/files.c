#include <stdio.h>

int main()
{
    FILE *fptr;
    // fptr =fopen("text.txt","r");

    fptr = fopen("newText.txt", "r");
    if (fptr == NULL)
    {
        printf("Files doesn't exist ");
    }
    else
    {
        fclose(fptr);
    }
    return 0;
}