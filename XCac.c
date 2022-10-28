#include<stdio.h>
int main()
{
    char str[100];
    gets(str);

    int len,pos;
    scanf("%d",&pos);
    len=strlen(str);

    if(pos<len)
    {
        printf("pos:%c",str[pos]);
    }
    else
    {
        printf("no");
    }
}
