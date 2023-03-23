#include<stdio.h>
int main()
//Write a C program to check whether a given number is positive or negative//
{
    int a;
    printf("enter the first number=");
    scanf("%d",&a);
    
    if(a>0)
    {
        printf("The Given Number is Positive");
    }
    else
        printf("The Given number is Negative");
    
    return 0;

}