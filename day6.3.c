//matrix adding array input value
#include <stdio.h>
#include<stdlib.h>
int main()
{
int a[100][100],b[100][100],c[100][100];
int i,j,d,e;

printf("Enter no of columns of array :\n");
scanf("%d",&d);
printf("Enter no of rows of array :\n");
scanf("%d",&e);

a[100][100]=a[d][e];
b[100][100]=b[d][e];
c[100][100]=c[d][e];

printf("Enter first matrix :\n");
for ( i = 0; i < d; i++)
    for ( j = 0; j < e; j++)
    {
        scanf("\n%d",&a[i][j]);
    }

printf("Enter second matrix :\n");
for ( i = 0; i < d; i++)
    for ( j = 0; j < e; j++)
    {
        scanf("\n%d",&b[i][j]);
    }

//sum
for (i = 0; i < d; ++i)
    for (j = 0; j < e; ++j)
    {
      c[i][j] = a[i][j] + b[i][j];
    }
printf("The sum of the matrices is :\n");
for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    {
        printf("%d\n",c[i][j]);

    }

return 0;
}