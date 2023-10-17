//matrix adding array
#include <stdio.h>
#include<stdlib.h>
int main()
{
int a[2][2]={{3,4},{2,1}}, b[2][2]={{5,2},{6,7}}, c[2][2], i, j;

c[0][0]=a[0][0]+b[0][0];
c[0][1]=a[0][1]+b[0][1];
c[1][0]=a[1][0]+b[1][0];
c[1][1]=a[1][1]+b[1][1];


for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    {
        printf("%d\n",c[i][j]);
    }

return 0;
}