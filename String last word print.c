#include<stdio.h>
void detect_last_word(char str[]);
float average(float a,float b,float c,float d,float e);
int main()
{
    char name[100];
    gets(name);
    fflush(stdin);
  //  float l,m,n,o,p;
  //  scanf("%f %f %f %f %f",&l,&m,&n,&o,&p);
     detect_last_word(name);
   // average(l,m,n,o,p);
    //detect_last_word(name);
}
void detect_last_word(char str[])
{
  //  char str1[100];
    int len=0;
    int i=0;
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    for(i=len-1;str[i]!=' ';i--)
    {
        len--;
    }
     for(i=len;str[i]!='\0';i++)
        {
            printf("%c",str[i]);
        }
}

//float average(float a,float b,float c,float d,float e)
//{
//    float average;
//    average=(a+b+c+d+e)/5;
//    printf("\nAverage:%f",average);
//}
