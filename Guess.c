
#include<stdio.h>
int main()
{
    int n,c,guess,i;
    int win=0;

    scanf("%d",&n);
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
        scanf("%d",&guess);
        if(n==guess)
        {
            win=1;
            break;
        }
        else{
            printf("Wrong Answer\n");
            if(i<c){
                printf("Please try again\n");
            }
        }
    }

    if(win==1){
        printf("Player 2 Win!!");
    }
    else{
        printf("Player 1 Win!!");
    }
    return 0;
    getch();
}
