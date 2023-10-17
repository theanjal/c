//store in an array
#include <stdio.h>
#include<stdlib.h>
int main()
{
int a[5],i;
printf("Enter 5 values\n");
for ( i = 0; i < 5; i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<5;i++)
{
    printf("The values are %d\n",a[i]);
}

    return 0;
}