#include<stdio.h>
int fun(int *p)
{
*p+=1;
return *p;
}
void main()
{
int x=10;
printf("%d\n%d\n",fun(&x),fun(&x));
}
