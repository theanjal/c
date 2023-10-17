//array difference average
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[2][3]={{1,2,3},{4,5,6}};
float sum1=0,sum2=0, diff=0, avg=0;	

for (int i = 0; i < 1; i++)
    for (int j = 0; j < 3; j++)
    {
        sum1+=a[i][j];
    }

for (int i = 1; i < 2; i++)
    for (int j = 0; j < 3; j++)
    {
        sum2+=a[i][j];
        
    }
diff=sum2-sum1;        
avg=(sum2+sum1)/6;

printf("Difference is %f\n Average is %f", diff,avg);

return 0;
	
}