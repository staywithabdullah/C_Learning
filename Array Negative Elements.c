#include<stdio.h>
int main()
{
    int arr[100];
    int i,size;

    printf("Enter Array Size: ");
    scanf("%d",&size);

   for(i=0; i<size; i++)
   {
       scanf("%d",&arr[i]);
   }

   for(i=0; i<size; i++)
   {
       if(arr[i]<0)
       {
           printf("%d\t",arr[i]);
       }
   }
   return 0;
}

