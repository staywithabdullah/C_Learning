/**WAP that will take n integers into an array A. Now remove all duplicates
numbers from that array. Finally print all elements from that array. **/

#include<stdio.h>
int main()
{
    int arr[100];//cause C language dynamic storage not allowed.
    int i,j,k,size;
    //input Array.
    printf("Enter Array Size: ");
    scanf("%d", &size);
    printf("Enter Array Elements: \n");
    for(i=0; i<=size-1; i++)
    {
        scanf("%d", &arr[i]);
    }
    //Remove duplicate elements.
    for(i=0; i<=size-1; i++)
    {
        for(j=i+1; j<=size-1; j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j; k<=size-1; k++)
                    arr[k]=arr[k+1];
                size--;
                j--;
            }
        }
    }
    //Print new array.
    printf("New Array: ");
    for(k=0; k<=size-1;k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}
