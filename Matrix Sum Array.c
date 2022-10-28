#include<stdio.h>
int main()
{
    int i,j,arr1[3][3],arr2[3][3],sum[3][3];

    printf("Enter Mat 1 elements: \n");
    for(i=0; i<3; i++)
    {
         for(j=0; j<3; j++)
         {
             scanf("%d", &arr1[i][j]);
         }
    }
    printf("\n");
    printf("Enter Mat 2 elements: \n");
    for(i=0; i<3; i++)
    {
         for(j=0; j<3; j++)
         {
             scanf("%d", &arr2[i][j]);
         }
    }
    //sum mat.
    for(i=0; i<3; i++)
    {
         for(j=0; j<3; j++)
         {
             sum[i][j]=arr1[i][j]+arr2[i][j];
         }
    }
    printf("New Sum Mat: \n");
    for(i=0; i<3; i++)
    {
         for(j=0; j<3; j++)
         {
             printf("%d ", sum[i][j]);
         }
         printf("\n");
    }
    return 0;
}
