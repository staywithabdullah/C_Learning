//Write a C program to input month number and print number of days in that month.

#include<stdio.h>
int main()
{
    int month;
    printf("Enter month number:");
    scanf("%d",&month);

    if(month==1||month==3 || month==5 || month==7||month==8 || month==10 || month==12)
    {
        printf("30 days");
    }
    else if(month==4||month==6||month==9||month==11)
    {
        printf("30 days");
    }
    else{
        printf("Invalid input.");
    }
    getch();
    return 0;

}
