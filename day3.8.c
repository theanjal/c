//Armstrong number
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,c,t,m,n;	
printf("Enter a three number:");
scanf("%d",&n);

a=n%10;
t=n/10;
b=t%10;
c=t/10;

m=(a*a*a)+(b*b*b)+(c*c*c);

if (n==m)
{
    printf("Number is Armstrong");
}
else
{ 
    printf("Number is not Armstrong");
}

return 0;
	
}