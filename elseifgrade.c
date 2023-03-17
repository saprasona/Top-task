#include<stdio.h>

int main()
{
    int sub 1, sub 2, sub 3, sub 4, sub 5, t;

    printf("enter marks of different subject=");
    scanf("%d %d %d %d %d",&sub 1,&sub 2,&sub 3,&sub 4,&sub 5);
    
    printf("Hindi=\n");
    scanf("%d",&sub 1);

    printf("English=\n");
    scanf("%d",&sub 2);

    printf("Maths=\n")
    scanf("%d",&sub 3);

    printf("Social science=\n");
    scanf("%d",&sub 4);

    printf("Evs=\n");
    scanf("%d",&sub 5);

    t=(sub1 + sub2 + sub3 + sub4 + sub5) * 100 / 500;
    printf("Percentage is = %d\n", t);

    if (t>=90)
{    
    {
        printf("you have got A+");
    }
    else if(t>80)
    {
        printf("you have got A");
    }
    else if(t>70)
    {
        printf("you have got B+");
    }
    else if(t>60);
    {
        printf("you have got B");
    }
    else if(t>50)
    {
        printf("you have got c");
    }

    else if(t>35)
    {
        printf("you have got E");
    }
    else
    {
        printf(" !Sorry you are fail! ")
    }
}
    return 0;

}