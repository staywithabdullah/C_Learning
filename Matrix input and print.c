#include<stdio.h>
int main()
{
    int mat[3][3];
    int i,j;

    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Output:\n");
    //print array
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
