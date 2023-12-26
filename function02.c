#include <stdio.h>
float sideSquare(float a);
float sideRectangle(float a, float y);
float radiousCircule(float red);

void main()
{
    float a;
    printf("Enter a side of square: ");
    scanf("%f", &a);
    printf("%f \n", sideSquare(a));

    float b, c;
    printf("Enter a side of rectangle A: ");
    scanf("%f", &b);
    printf("Enter a side of rectangle B: ");
    scanf("%f", &c);
    printf("%f \n", sideRectangle(b, c));

    float d;
    printf("Enter a radious of circule: ");
    scanf("%f",&d);
    printf("%f \n",radiousCircule(d));
}

float sideSquare(float x)
{
    return x * x;
}

float sideRectangle(float x, float y)
{
    return x * y;
}

float radiousCircule(float red)
{
    return 3.14 * red * red;
}