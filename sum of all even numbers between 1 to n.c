/**
 * C program to print sum of all even numbers between 1 to n
 */
 #include<stdio.h>
 int main()
 {   int n,i,sum=0;
     printf("Enter uper valie:");
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
         if(i%2==0){
            sum=sum+i;
         }
     }
     printf("Sum is :%d",sum);
 }




