#include<stdio.h>
#include<string.h>


typedef struct person {
    char name[40];
    int age;
    float CGPA;
}PERSON;

int main(){

    PERSON P1;
    gets(P1.name);
    scanf("%d", &P1.age);
    scanf("%f", &P1.CGPA);

    printf("\nName: %s",P1.name);
    printf("\nAge: %d",P1.age);
    printf("\nCGPA: %.3f",P1.CGPA);

    return 0;


}
