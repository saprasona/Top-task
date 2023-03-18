#include<stdio.h>

int main()
{
    int marks;
    printf("enter the marks=");
    scanf("%d",&marks);

    if(marks>30)
    { 
        printf("You are pass !Congratulation!");
    }
    else
    {
        printf("!Sorry you are Fail! Try a next time");
    }
    printf("Thank you");
    return 0;
}