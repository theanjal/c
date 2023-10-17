//array function sum
#include<stdio.h>
#include<stdlib.h>

int a,b;
void summ(a,b)
{
    int sum;
    sum=a+b;
    printf("sum is %d",sum);
}

int main()
{
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter another number\n");
    scanf("%d",&b);

    summ(a,b);

    return 0;
}