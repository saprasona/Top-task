#include<stdio.h>
int main()
{
    int a=10,b=30;
    
    printf("before swap a=%d b=%d",a,b);

    a=a+b;//a=30(10+20)
    b=a-b;//b=10(30-20)
    a=a-b;//a=20(30-10)

    printf("\nafter swap a=%d b=%d",a,b);

    return 0;
}