
#include<stdio.h>

int main(){


   int a,num,reverse=0;

   printf("enter number:");

   scanf("%d",&num);
   while(num){
    a=num%10;
    reverse=reverse*10+a;
    num=num/10;
   }
   printf("reversed of number%d",reverse);
}
