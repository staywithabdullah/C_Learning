//C program to find maximum between three numbers.
#include<stdio.h>
int main()
{
    int num1,num2,num3,max;

    printf("Enter Number 1:");
    scanf("%d",&num1);
    printf("Enter Number 2:");
    scanf("%d",&num2);
    printf("Enter Number 3:");
    scanf("%d",&num3);

    if(num1>num2)
    {
        max=num1;
    }
    else{
        max=num2;
    }
    if(max>num3){
        max=max;
    }
    else{
        max=num3;
    }
    printf("Maximum value is:%d",max);

    getch();
    return 0;
}

