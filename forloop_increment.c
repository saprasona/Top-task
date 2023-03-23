#include<stdio.h>
//take a numbers from users and print it in increment order//
int main()
{
    int n;
    printf("enter the numbers=");
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}