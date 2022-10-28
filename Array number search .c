#include<stdio.h>
int main()
{
    int i,num,arr[6];

    for(i=0; i<6; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Search Number: ");
    scanf("%d",&num);
    int flag=0;
    for(i=0; i<6; i++)
    {
        if(arr[i]==num)
        {
            if(flag==0)
            {
                printf("Found at index: %d ,",i);
                flag++;
            }
            else
            {
                printf("%d ,",i);
            }
        }
    }
    if(flag==0)
    {
        printf("Not Found");
    }

return 0;
}
