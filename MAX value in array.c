#include<stdio.h>
int main()
{
    int n,max,i;
    scanf("%d",&n);
    int arr[n];

    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1; i<=n-1; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }

    }
    printf("Max is:%d",max);

    return 0;
}
