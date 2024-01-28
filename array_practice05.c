#include <stdio.h>
// write a program to insert an element at the end of the array
int main()
{
    int arr[50], size, item;
    printf("Enter a size of an array: ");
    scanf("%d", &size);

    printf("Enter a elements of an array : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("the elements you are entered : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\nEnter the last element in an array: ");
    scanf("%d", &item);
    size++;
    arr[size - 1] = item;
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }

    // Add element at any position of an array :
    int pos, ele;
    printf("\n Enter the position of an array:\n");
    scanf("%d \n", &pos);
    printf("Enter the element at that position : ");
    scanf("%d \n", &ele);
    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    size++;
    arr[pos] = ele;
    for (int i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}