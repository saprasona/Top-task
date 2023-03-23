#include<stdio.h>

int main()
//Write a C program to check whether a given number is Even or odd//
{
    int a;

    printf("Enter the number=");
    scanf("%d",&a);
    
   if(a%2==0)
    {
    printf("The number is Even");
    }
    else
    {
        printf("The number is Odd");
    }
    return 0;
}