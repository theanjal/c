// Check number greater or lesser
// nested if
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("Enter a No:\n");
	scanf("%d",&a);
	printf("Enter a No:\n");
	scanf("%d",&b);

	if (a>=b)
		if (a==b)
		{
			printf("Two values are equal");
		}
		else
		{
			printf("a is Greater than b");
		}
	

	else 
	{
		printf("b is Greater than a");
	}
	
}