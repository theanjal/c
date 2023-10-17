#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	printf("Enter number:\n");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
		{
			if(n%i!=0)
				{
					printf("%d is  prime\n",n);
					break;
				}
			else 
				{
					printf("%d is not prime\n",n);
					break;
				}
		}


	return 0;
}

			

	
		