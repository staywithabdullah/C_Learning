
#include<stdio.h>
int main()
{
    int i,k,m,max,min,arr[5];


    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    //max
    max=arr[0];
    for(i=1; i<5; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            k=i;
        }
    }
    printf("Max:%d ,Index:%d",max,k);
    printf("\n");
    //min
        min=arr[0];
    for(i=1; i<5; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            m=i;
        }
    }
    printf("Min:%d ,Index:%d",min,m);
    return 0;
}
