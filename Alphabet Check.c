//Write a C program to check whether a character is alphabet or not.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);

    if(ch>='a'&&ch<='z' || ch>='A'&& ch<='Z')
    {
        printf("This is Alphabet");
    }
    else
    {
        printf("This is not Alphabet.");
    }
    getch();
    return 0;
}
