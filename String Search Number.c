#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];

    char c;
    gets(str);
    scanf("%c",&c);

    int i=0,position=-1;
    while(str[i]!='\0')
    {
        if(toupper(str[i])==toupper(c))
        {
            position=i;
        }
        i++;
    }
    if(position==-1)
    {
        printf("Not found");
    }
   else
   {
       printf("Found: %d",position);
   }

}
