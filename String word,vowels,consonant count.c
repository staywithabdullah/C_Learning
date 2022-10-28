#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);

    int len,temp,word=0,vowel=0,con=0;
    len=strlen(str);
    for(int i=0; i<len; i++)
    {
        temp=tolower(str[i]);
        if(temp==' ')
        {
            word++;
        }
        else
        {
            if(temp=='a' ||
                    temp=='e' ||
                    temp=='i' ||
                    temp=='o' ||
                    temp=='u')
            {
                vowel++;
            }
            else
            {
                con++;
            }
        }
    }
    printf("Word:%d\n",word+1);
    printf("Vowel:%d\n",vowel);
    printf("Consonant:%d\n",con);
    printf("Letter:%d\n",vowel+con);
}
