#include<stdio.h>
int main()
{
    char str[50],str1[50],str2[50];
    int middle,len1,len2;
    gets(str1);

    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    middle=len1/2;
    for(int i=0;i<=middle-1;i++)
    {
        str[i]=str1[i];

    }
    for(int i=0;i<=len2 ;i++)
    {
        str[middle+i]=str2[i];
    }
    int j=0;
    for(int i=middle;i<=len1 ;i++)
    {
        str[middle+len2+j]=str1[i];
        j++;
    }
    puts(str);
}
