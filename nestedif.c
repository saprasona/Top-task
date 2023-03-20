#include<stdio.h>

int main()
{
int a,b,c;
printf("enter three numbers=");
scanf("%d %d %d",&a,b,c);

if(a>b)
{
if(a>c)
{
    printf("a is the maximum");

}
else
{
    printf("c is the maximum");
}
}
else
{
if(b>c) 
{
    printf("b is the maximum");
}
else
{
    printf("c is the maximum");
} 
}   

return 0;

}




 