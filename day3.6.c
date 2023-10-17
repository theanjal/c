//arary , average the values
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[4]={1,2,3,4}, i;
float avg, sum=0;
for ( i = 0; i < 4; i++)
{
	sum=sum+a[i];
}
avg=sum/4;

printf("%f\n",avg);

return 0;
	
}