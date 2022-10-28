
#include<stdio.h>

int main(){
    int a;
    a =5;
    int *ptr;
    ptr = &a;
    int **pptr;
    pptr = &ptr;

    printf("The Value of a: %d\n",a);
    printf("The address of a: %d\n", &a);
    printf("The Value of ptr: %d\n",ptr);
    printf("The address of ptr: %d\n", &ptr);

    printf("The value of the variable pointed by ptr: %d\n", *ptr);
    printf("The Value of pptr: %d\n",pptr);
    printf("The address of pptr: %d\n", &pptr);

    printf("The value of the pointer pointed by pptr: %d\n", *pptr);
    printf("The value of the variable pointed by pptr: %d", **pptr);



    return 0;
}
