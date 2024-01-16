// Write a function to count the number of odd number in an array

#include <stdio.h>

int oddArray(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("%d \n",oddArray(arr,5));
    return 0;
}

int oddArray(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}