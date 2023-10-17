#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,sum=0;
	printf("Enter number:\n");
	scanf("%d",&n);
	

	for (i=0; i<=n; i++)
	{
		sum=sum+i;
	}
	

	printf("Sum is %d",sum);

	return 0;
}