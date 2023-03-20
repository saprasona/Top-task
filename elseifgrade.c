#include<stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5, t;

    printf("enter marks of different subject=");
    
    printf("Hindi=\n");
    scanf("%d",&sub1);

    printf("English=\n");
    scanf("%d",&sub2);

    printf("Maths=\n");
    scanf("%d",&sub3);

    printf("Social science=\n");
    scanf("%d",&sub4);

    printf("Evs=\n");
    scanf("%d",&sub5);

    t=(sub1 + sub2 + sub3 + sub4 + sub5) * 100 / 500;
    printf("Percentage is = %d\n", t);

    if(t>=90)
   
    {
        printf("you have got grade A+");
    }
    else if(t>80)
    {
        printf("you have got grade A");
    }
    else if(t>70)
    {
        printf("you have got grade B+");
    }
    else if(t>60)
    {
        printf("you have got grade B");
    }
    else if(t>50)
    {
        printf("you have got grade c");
    }
    else if(t>35)
    {
        printf("you have got grade E");
    }
    else
    {
        printf(" !Sorry you are fail! ");
    }


printf("!Thank You!");

    return 0;

}