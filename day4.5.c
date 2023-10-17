//array function print
#include<stdio.h>
#include<stdlib.h>

int i;

int array(int a[3])
{
   for(i=0;i<3;i++)
    printf("Array is %d\n",a[i]);
    
}

int main()
{
    int a[3]={1,2,3};
    array(a);

    return 0;
}