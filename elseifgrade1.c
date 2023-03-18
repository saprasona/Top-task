#include<stdio.h>

int main()
{
    int percentage;
    printf("enter the percentage =");
    scanf("%d",percentage);

    if (percentage > 90)

    {
        printf("You got A+\n");
        printf("!Congratulation!");
    }
    else if (percentage > 80)
    {
        printf("You got A\n");
        printf("!Congratulation!");
    }
    else if(percentage > 70)
    {
        printf("You got B+\n");
        printf("congratulatio");
    }
    else if (percentage > 60)
    {
        printf("You got B\n");
        printf("!Congratulation!");
    } 
    else if (percentage > 50)
    {
        printf("You got C++\n");
        printf("!Congratulation!");
    }
    else if (percentage > 35)
    {
        printf("You got C\n");
        printf("!Congratulation!");
    }
    else
    {
        printf("! You are Fail! TRY A NEXT TIME");
    }

    return 0;

}