
#include <stdio.h>

void printArray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        // *ptr = 33;
        printf("The value of array[%d] is %d which is at address %d\n", i, *ptr, ptr);
        ptr++;
    }
}

void printArray2(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("The value of array[%d] is %d\n", i, arr[i]);
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
    // printArray(&array[0], n);
    printArray(array,n);
    // int *ptr;
    // ptr = &array[0];
    // printf("\n");
    // for(int i=0; i<n; i++){
    //     printf("The value of array[%d] is %d\n", i, array[i]);
    // }

    return 0;
}
