//palindrome means a sting that is same from backword to forward.
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
        rev=rev*10+r;
    }
if(n==rev){
    printf("palindrome");
}
    else{
        printf("Not a palindrome.");
    }

return 0;
}


