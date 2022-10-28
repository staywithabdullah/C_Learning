#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("data.txt","w");
    if(fp==NULL)
    {
        printf("Error");
        return;
    }
    printf("opened");
}
