#include <stdio.h>

int main()
{
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("Difference : %u \n", ptr - _ptr);
    _ptr = &age;
    printf("Comparision : %u \n", ptr == _ptr);

    int adhar[5];
    int *ptr1 = &adhar[0];
    // input
    for (int i = 0; i < 5; i++)
    {
        printf("%d index : ",i);
        scanf("%d",&adhar[i]);
    }
    // output
    for (int i = 0; i < 5; i++)
    {
        printf("%d index %d \n", i,adhar[i]);
    }

    return 0;
}