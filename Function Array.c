#include <stdio.h>

void printReverse1(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        // *ptr = 33;
        printf("%d ", *ptr);
        ptr--;
    }
}

void printReverse2(int arr[], int size)
{
    for (int i = size-1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
}





int main()
{

    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printReverse1(&array[n-1], n);
    // printReverse2(array, n);
    // for(int i =n-1; i>=0; i--){
    //     printf("%d ",array[i]);
    // }

    return 0;
}
