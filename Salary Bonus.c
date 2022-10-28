/** In a factory there are three categories of employees: X, Y, Z. The manager announced a
bonus for the employees who have
➢ 12 years or more work experience and more than 5 family members,
OR
➢ Less than 1000.50 BDT total family income per month
He is also generous to his bonus deprived employees who have a larger family. Thus, He has
declared the bonus for
➢ For the employees of ‘Y’ and ‘Z’ categories who have more than 8 family members and
has less than 1100.78 BDT total family income per month.
➢ However, if an employee is from ‘X’ category, he can avail the bonus having more than 5
family members.
Now you need to automate the system by writing a program to take following inputs from user
(employee) and notify him whether he is eligible for the bonus or not.
➢ Category (character)
➢ Years of work experience (integer)
➢ Number of family members (integer)
➢ Total family income per month (float) */

#include<stdio.h>
int main()
{
    int exp,member;
    char cate;
    float income;

    printf("Category:");
    scanf("%c",&cate);

    printf("Years of work experience:");
    scanf("%d",&exp);

    printf("Family members:");
    scanf("%d",&member);

    printf("Total family income per month:");
    scanf("%f",&income);


    if(cate=='X' || cate=='Y' || cate=='Z')
    {
        if(exp>=12 && member>5 || income<1000.50)
        {
            printf("Will Receive the Bonus");
        }
        else
        {
            if(cate=='Y' || cate=='Z')
            {
                if(member>8 && income<1100.78)
                {
                    printf("Will Receive the Bonus");
                }
                else
                {
                    printf("Will not receive the Bonous");
                }
            }
            else
            {
                if(member>5)
                {
                    printf("Will Receive the Bonus");
                }
                else
                {
                    printf("Will not receive the Bomous");
                }
            }
        }
    }
    else
    {
        printf("Invalid Category");
    }

    getch();
    return 0;

}

