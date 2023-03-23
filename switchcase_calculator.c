#include <stdio.h>

//calculator for addition, substrction, multiplication and division//

int main()
{
	char a;

	printf("Enter the operator sign:");
	scanf("%c", &a);

	switch(a)
	{
		case '+':
			{
			int a,b,c;
			scanf("%d %d", &a, &b);
			c=a+b;
			printf("%d", c);
			}
			break;

		case '-':
		   {
			int a,b,c;
			scanf("%d %d", &a, &b);
			c=a-b;
			printf("%d", c);
			}
			break;

		case '*':
		   {
			int a,b,c;
			scanf("%d %d", &a, &b);
			c=a*b;
			printf("%d", c);
			}
			break;

		case '/':
		   {
			float a,b,c;
			scanf("%f %f", &a, &b);
			c=a/b;
			printf("%f", c);
			}
			break;


		default:
			printf("Enter valid operator sign");

	}

	return 0;
}

