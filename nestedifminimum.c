#include<stdio.h>

int main()
{
int a,b,c;
printf("enter three numbers=");
scanf("%d %d %d",&a,b,c);

if(a<b)
{
if(a<c)
{
    printf("a is the minimum");
}
else
{
    printf("c is the minimum");
}
}
{
if(b<c) 
{
    printf("b is the minimum");
}
else
{
    printf("c is the minimum");
}  
}
 

return 0;

}  
 