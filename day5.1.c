//Factorial of a number
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,fac=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    
    for ( i = n; i >0 ; i--)
    {
        fac=fac*i;
    }
    printf("\nFactorial is %d",fac);

    return 0;
}