#include<stdio.h>
int main()
{
int i,n,input,sum=0;

scanf("%d",&n);

for(i=1;i<=n;i++){
    scanf("%d",&input);
    sum=sum+input;

}
printf("%d",sum);
/*while(i<=n){
    printf("%d,",i);
    i++;
}*/
return 0;
}
