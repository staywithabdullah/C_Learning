//Write a C program to input any character and check whether
// it is alphabet, digit or special character.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(c>='a'&&c<='z' || c>='A'&&c<='Z')
    {
        printf("This is Alphabet");
    }
    else if(c>='1'&&c<='9')
    {
        printf("This is Digit");
    }
    else
    {
        printf("This is Special Character");
    }
    getch();
    return 0;
}

