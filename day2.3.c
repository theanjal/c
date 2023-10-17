// Check number greater or lesser
//if else if
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("Enter a No:\n");
	scanf("%d",&a);
	printf("Enter a No:\n");
	scanf("%d",&b);

	if (a>b)
	{
		printf("a is Greater than b");
	}
	else if (a<b)
	{
		printf("b is Greater than a");
	}
	else
	{
		printf("Two numbers are equal");
	}
	
}