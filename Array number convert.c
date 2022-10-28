#include<stdio.h>
int main()
{
    int i,j, arr[8];
    for(i=0; i<8; i++)
    {
        scanf("%d",&arr[i]);
    }

    //convert
    for(i=0; i<8; i++)
    {
        if(arr[i]%3==0)
        {
            arr[i]=-1;
        }
    }

    for(i=0; i<8; i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}
