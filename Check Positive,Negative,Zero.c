//Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>
int main()
{
    int num;

    printf("Input Value:");
    scanf("%d",&num);

    if(num>0){
        printf("This is Positive Value");
    }
    else if(num<0){
        printf("This is Negative Value");
    }
    else{
        printf("This is Zero");
    }
    getch();
    return 0;
}
