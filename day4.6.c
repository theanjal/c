//calculator function
#include<stdio.h>
#include<stdlib.h>

int a,b,c,d,e;
float f;
char op;

int sum(a,b)
{
    c=a+b;
    printf("%d",c);
}

int dif(a,b)
{
    d=a-b;
    printf("%d",d);
}

int mul(a,b)
{   
    e=a*b;
    printf("%d",e);
}

float divi(a,b)
{
    f=a/b;
    printf("%f",f);
}



int main()
{
    printf("Enter operator :\n");
    scanf("%c",&op);


    printf("Enter a numbers :\n");
    scanf("%d",&a);
    printf("Enter another numbers :\n");
    scanf("%d",&b);
   
    if(op=='+')
		{
			sum(a,b);
		}
	else if(op=='-')
		{
			dif(a,b);
		}
	else if(op=='*')
		{
			mul(a,b);
		}
	else if(op=='/')
		{
			divi(a,b);
		}


    return 0;   
}