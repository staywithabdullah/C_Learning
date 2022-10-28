#include<stdio.h>
int main()
{
    int i,sum=0,arr[5];


    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1; i<5; i++)
    {
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
    }
            printf("Sum is %d",sum);
    return 0;
}

