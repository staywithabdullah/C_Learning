#include<stdio.h>
int main()
{
    int n,rev=0,q,r;

    scanf("%d",&n);
    q=n;
    while(q>0)
    {
        r=q%10;
        q=q/10;//q/=10;
        rev=rev+r;
    }
    printf("reverse:%d",rev);
}


