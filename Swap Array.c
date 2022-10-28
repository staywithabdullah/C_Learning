/**WAP that will first take n integers into an array A and then m integers into
array B. Now swap all elements between array A and B. Finally show all
elements of both array A and B.**/

#include<stdio.h>
int main()
{
    int arr1[100], arr2[100], arr3[100]; //cause C language dynamic storage not allowed.
    int i,size1,size2;

    //input array 1.
    printf("Enter First Array Size: ");
    scanf("%d", &size1);
    printf("Enter Array Elements: \n");
    for(i=0; i<=size1-1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    //input array 2.
    printf("Enter Second Array Size: ");
    scanf("%d", &size2);
    printf("Enter Array Elements: \n");
    for(i=0; i<=size2-1; i++)
    {
        scanf("%d",&arr2[i]);
    }
    /*Now store arr1 in a new array and store arr2 in arr1.
    Then store new array in array 2.*/
    for(i=0; i<=size1+size2-1; i++)
    {
        arr3[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=arr3[i];
    }
    //print new array A & B.
    printf("Array A : ");
    for(i=0; i<=size2-1; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");

    printf("Array B: ");
    for(i=0; i<=size1-1; i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;

}
