#include<stdio.h>

int main()
//Write a C program to accept two integrs & check whether they Equal or not Equal//
{
    int a,b;

     printf("Enter the First number=");
     scanf("%d",&a);
     printf("Enter the Second number=");
     scanf("%d",&b);

if(a==b)
{
     printf("The Numbers Are Equal");
}
else
{
    printf("The Numbers Are Not Equal");
}

return 0;
}