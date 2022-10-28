#include<stdio.h>
int main()
{
    int n,i,p,q=1,r=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&p);
    }
    if(p==q){
        printf("HARD");
    }
    else if(p==r){
        printf("EASY");
    }
    return 0;
}
