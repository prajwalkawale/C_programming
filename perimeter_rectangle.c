#include <stdio.h>
int main()
{
    int a, b, peri;
    printf("ENTER THE SIDE A OF RACTANGLE  !! \n");
    scanf("%d", &a);
    printf("ENTER THE SIDE B OF RACTANGLE  !! \n");
    scanf("%d", &b);
    peri = a + b;
    printf("the side a (%d) , and side b  (%d) , of rectangle then the perimeter of rectangle is (%d) \n", a, b, peri);


// for loop 
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
