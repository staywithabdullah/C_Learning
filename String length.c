#include<stdio.h>
int main()
{
    char str[20]="Hello";

    int length=0;
    int i=0;

    while(str[i]!='\0')
    {
        length++;
        i++;
    }

    printf("The length: %d\n",length);

    int length2=strlen(str);
    printf("The length(uning function): %d\n",length2);
}
