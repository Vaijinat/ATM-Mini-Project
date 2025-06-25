#include<stdio.h>
void main()
{
int a,b,sum,dif,pro;
a=-5,b=8;
func(a,b,&sum,&dif,&pro);
printf("%d %d %d ",sum,dif,pro);
}
func(int x,int y,int *p,int *q,int *z)
{
*p+=x+y;
*q=x-y;
*z=x*y;
}
