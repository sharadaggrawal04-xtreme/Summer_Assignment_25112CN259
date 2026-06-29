// Q104 - Create Quiz Application

#include <stdio.h>

int main()
{
    int score = 0, ans;

    printf("Q1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("Q2. 2 + 2 = ?\n");
    printf("1. 3\n2. 4\n3. 5\n4. 6\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("Q3. C Language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("Your Score = %d/3\n", score);

    return 0;
}