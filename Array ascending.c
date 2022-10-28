#include<stdio.h>
int main()
{
    int i,j,tmp,arr[5];
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    //convert

    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[i]>arr[j])
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }

        }
    }

    for(i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
