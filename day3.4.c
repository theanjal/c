//arary , sum the values
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[]={1,2,3,4}, sum=0, i;
for ( i = 0; i < 4; i++)
{
	sum=sum+a[i];
}

printf("%d\n",sum);

return 0;
	
}