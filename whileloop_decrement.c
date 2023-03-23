#include<stdio.h>
//take a numbers from users and print it in decrement order//
int main()
{
    int a,num;
    printf("enter the numbers=");
    scanf("%d",&a);
    
    while(a>=0)
    {
        printf("%d\n",a);
        a--;
    }
    
    return 0;
}
