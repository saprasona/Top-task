#include<stdio.h>
int main()
{
    int a=20,b=40,c;
    
    printf("Before swap a=%d b=%d",a,b);
    
    c=a;
    a=b;
    b=c;

    printf("After swap a=%d b=%d",a,b);

    return 0;
}