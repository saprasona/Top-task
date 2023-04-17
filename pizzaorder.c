#include<stdio.h>
int main()
{  float bill=0,qty,rate,Discount,Totalbill;
    char name[20],id[30],ch[20];
    int choice,num;
    printf(" Enter your name=");
    scanf("%s",name);
    printf("Enter your E-mail=");
    scanf("%s",id);
    printf("Enter your number=");
    scanf("%d",&num);
g:{
 printf("-----Pizza Menu-----");
 printf("\n1.Double cheeze pizza 300.00/piece\n");
 printf("2.Margreta 200.00/piece\n");
 printf("3.Puff Pizza 275.00/piece\n");
 printf("4.Thin rusk Pizza 275.00/piece\n");
 printf("Choose any one option\n");
 scanf("%d",&choice);
}

switch(choice)
{
    case 1: printf("please select quantity=");
    scanf("%f",&qty);
    rate=300.00;
    bill=bill+(rate*qty);
    printf("Total bill=%f",bill);
    goto h;
    break;
    case 2: printf("please select quantity=");
    scanf("%f",&qty);
    rate=200.00;
    bill=bill+(rate*qty);
    printf("Total bill=%f",bill);
    goto h;
    break;
    case 3: printf("please select quantity=");
    scanf("%f",&qty);
    rate=275.00;
    bill=bill+(rate*qty);
    printf("Total bill=%f",bill);
    goto h;
    break;
    case 4: printf("please select quantity=");
    scanf("%f",&qty);
    rate=275.00;
    bill=bill+(rate*qty);
    printf("Total bill=%f",bill);
    goto h;
    break;
default: printf("//////Enter valid input//////\n");
    goto h;
    break;
}
h:{ printf("\nchoose yes or no for another order=");
    scanf("%s",ch);
    if(strcmp(ch,"yes")==0)
         {
            printf("yes");
            goto g;
         }
    else
        {
            printf("Exit");
        }
  }

if(bill>1000)
{   Discount=10;
    Discount=bill*10/100;
}
else
{
    Discount=0;
}
Totalbill=bill-Discount;
printf("\nTotal bill is Rs.=%f",Totalbill);
    return 0;
}