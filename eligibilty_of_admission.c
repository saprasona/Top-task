#include<stdio.h>
//write a C program to find the eligibility of admission for a professional course//
int main()
{ int sub1,sub2,sub3,t,s;

printf("Enter the marks of subject=");

printf("Maths\n");
scanf("%d",&sub1);
printf("Physis\n");
scanf("%d",&sub2);
printf("Chemistry\n");
scanf("%d",&sub3);
t=sub1+sub2+sub3;
s=sub1+sub2;
printf("%d\n",t);
printf("%d\n",s);

if(sub1>=65)
{
    printf("Eligible for Admission");
}
else if(sub2>=55)
{
    printf("Eligible for Admission");
}
else if(sub3>=50)
{
    printf("Eligible for Admission");
}
else if(t>=190)
{
    printf("Eligible for Admission");
}
else if(s>=140)
{
    printf("Eligible for Admission");
}
else
{
    printf("Not Eligible for Admission");
}
    return 0;
}