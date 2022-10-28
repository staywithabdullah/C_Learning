//Write a C program to check whether a number is even or odd.
#include<stdio.h>
int main()
{
    int a;
    printf("Please enter a number:");
    scanf("%d",&a);

    if(a==0)
    {
        printf("This is Zero number");
    }
    else if(a%2==0)
    {
        printf("This is Even number");
    }
    else
    {
        printf("This is Odd number");
    }

    getch();
    return 0;
}
