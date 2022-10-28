//Write a C program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Value:");
    scanf("%d",&a);

    if(a%5==0 && a%11==0){
        printf("The number is divisible by 5 and 11.");
    }
    else{
        printf("This number is not divisible0.");
    }
    getch();
    return 0;
}
