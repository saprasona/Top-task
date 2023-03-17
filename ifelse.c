#include<stdio.h>
int main()
// if age above 18 they can drive & vote //
{ 
    int age ;
    printf("enter age :");
    scanf("%d",&age);

if(age > 18)
{ 
    printf("adult \n");
    printf("they can vote\n");
    printf("they can drive\n");
}
else 
{
    printf("not adult \n");
}
    printf("thank you");
    return 0;

}