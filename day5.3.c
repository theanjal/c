//Largest element in an array
#include <stdio.h>
#include<stdlib.h>
int main()
{
int a[8]={14,26,34,15,50,60,76,18},i;
int max=a[0];

for ( i = 0; i < 8; i++)
    if (a[i]>max)
    max=a[i];        
    
    printf("The largest number is %d",max);

    return 0;
}