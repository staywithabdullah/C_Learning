#include <stdio.h>
#include <string.h>
#define size 100
void wordrev(char str[])
{
    int i, j, len, startIndex, endIndex;
    len = strlen(str);
    endIndex = len - 1;

    for(i = endIndex; i >= 0; i--)
    {
        if(str[i] == ' ' || i == 0)
        {
            if(i == 0)
            {
                startIndex = 0;
            }
            else
            {
                startIndex = i + 1;
            }
            for(j = startIndex; j <= endIndex; j++)
            {
                printf("%c", str[j]);
            }
            endIndex = i - 1;
            printf(" ");
        }
    }
}
int main()
{
    char s1[size];

    gets(s1);

    wordrev(s1);


    return 0;
}

