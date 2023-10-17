//area of rectangle
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,area;
	printf("Enter a side:\n");
	scanf("%d",&a);
	printf("Enter another side:\n");
	scanf("%d",&b);
	
	area=a*b;
	printf("Area is %d",area);

	return 0;
}