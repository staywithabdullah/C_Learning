
#include <stdio.h>

int main()
{
    int range1, range2;
    scanf("%d %d", &range1, &range2);

    for (int i = range1; i <= range2; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d", i);
            if(i<range2-1){
                printf(", ");
            }
        }
        /// if(i%2!=0 && i!=range2 && i!=range2-1 ) printf(", ");
    }

    return 0;
}
