#include<stdio.h>
int main(){
    int r1,r2,c1,c2;  // r1- Row1 , r2- Row2 , C1-column1 , c2-column2;
    printf("\nEnter row and column for first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter row and column for second matrix: ");
    scanf("%d%d",&r2,&c2);

    int MatA[r1][c1];
    int MatB[r2][c2];
    int sum[c1][r2];
    int i,j,k;

    if(c1!=r2){
        printf("\nColumn of first Matrix is not equal to Row of the second matrix!");
    }
    else {

        // input element for MatA:
        printf("\nMatA elements: ");
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                printf("\nElement [%d] [%d] : ",i,j);
                scanf("%d",&MatA[i][j]);

            }
        }

        // input element for MatB:
        printf("\nMatB elements: ");
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                printf("\nElement [%d] [%d] : ",i,j);
                scanf("%d",&MatB[i][j]);

            }
        }
        //Multiplication formula:
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                sum[i][j]=0;
                for(k=0;k<c1;k++){
                    sum[i][j]+=MatA[i][k]*MatB[k][j];
                }
            }
        }

        //Print Multiplication of MatA & MatB:
        printf("\nMatA x MatB : \n");
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
    }

return 0;

}
