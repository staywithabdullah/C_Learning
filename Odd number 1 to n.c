// * C program to print all Odd numbers from 1 to n

#include<stdio.h>
int main()
{
    int i,n;
     printf("Enter Inpur:");
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
         if(i%2!=0){
            printf("%d ",i);
         }
     }
}
