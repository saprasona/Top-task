#include<stdio.h>

int main()
{
    char sign = '+,-,*,/';

    printf("enter the number =");
    scanf("%c",& sign);
    switch (sign);
    {
     case 1:printf("+ %c\n");
        break;

     case 2:printf("- %c\n");
        break;

     case 3:printf("* %c\n");
        break;

     case 4:printf("/ %c\n");
        break;


    default : printf("please enter valid sign");

    }

    return 0;

}