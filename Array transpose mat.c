
#include<stdio.h>
int main()
{
    int n,m;
    printf("n: ");
    scanf("%d",&n);
    printf("m: ");
    scanf("%d",&m);
    int arr[100][100];
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0;j<m; j++)
        {
            scanf("%d",&arr[i][j]);

        }
    }

        for(j=0;j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }
}
