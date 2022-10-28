#include<stdio.h>
int main()
{
    char str[50];
    int n,length;
    printf("Enter Sentence: ");
    gets(str);
    length=strlen(str);

    printf("Which position: ");
    scanf("%d",&n);
    if(n<length)
    {
        printf("The letter is: %c",str[n]);
    }
    else
    {
        printf("No letter ");
    }
}
