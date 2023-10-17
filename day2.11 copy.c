#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b;
char op;
float d;

printf("Enter the operation (+, -, *, /)\n");
scanf("%c", &op);
printf("Enter number:\n");
scanf("%d",&a);
printf("Enter another number:\n");
scanf("%d",&b);

	if(op=='+')
		{
			d=a+b;
			printf("%d%c%d = %f", a,op,b,d);
		}
	else if(op=='-')
		{
			d=a-b;
			printf("%d%c%d = %f", a,op,b,d);
		}
	else if(op=='*')
		{
			d=a*b;
			printf("%d%c%d = %f", a,op,b,d);
		}
	else if(op=='/')
		{
			d=a/b;
			printf("%d%c%d = %f", a,op,b,d);
		}
	else
		{
			printf("Invalid Operator !");
		}

return 0;
	
}