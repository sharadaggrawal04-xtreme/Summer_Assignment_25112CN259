// Q102 - Create Voting Eligibility System

#include <stdio.h>

int main()
{
    int age;

    printf("Enter Your Age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("Eligible for Voting");
    else
        printf("Not Eligible for Voting");

    return 0;
}