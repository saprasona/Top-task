#include<stdio.h>
//take a numbers from users and print it in decrement order//
int main()
{
    int n;
    printf("enter the numbers=");
    scanf("%d",&n);
    int i=0;
    while(i>=n)
    {
        printf("%d\n",i);
        i--;
    }
    
    return 0;
}
