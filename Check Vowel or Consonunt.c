//Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(c>='a'&&c<='z' || c>='A'&&c<='Z')
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            printf("This is Vowel");
        }
        else
        {
            printf("This is not a vowel");
        }
    }
    else
    {
        printf("This is not an Alphabet");
    }
    getch();
    return 0;
}
