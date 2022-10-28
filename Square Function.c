#include<stdio.h>
int sqr(int a)
{

   int result=a*a;
   printf("Square is: %d\n",result);
   return 0;
}
int main()
{
    int num;
    scanf("%d",&num);
    sqr(num);
    return 0;

}
