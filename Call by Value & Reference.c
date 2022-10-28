#include <stdio.h>

void swapusingCallByValue(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swapusingCallByReference(int *a, int *b){
    int temp;
    temp=*a; // temp is now holding the value of the variable whose address is at a
    *a=*b; // variable pointed by a is now being overriden by the value of variable pointed by b
    *b=temp; // varible pointed by b is getting the value of variable temp
}


int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    printf("Before Swap:\nn = %d\nm =% d\n", n, m);
    // swap(n,m);
    swapusingCallByReference(&n, &m);
    printf("After Swap:\nn = %d\nm =% d",n ,m);

    return 0;
}
