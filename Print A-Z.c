/*Write a C program to print alphabets from a to z using for loop.
How to print alphabets using loop in C programming.
Logic to print alphabets from a to z using for loop in C programming.*/

#include<stdio.h>
int main()
{
    char  ch;
    //for reverse(ch='z';ch>='a';ch--)
    for (ch='a';ch<='z';ch++)
    {
        printf("%c ",ch);

    }
    getch();
}
