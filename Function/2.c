#include<stdio.h>
int fun(int x)
{
printf("%d\n",x);
return x;
}
int main()
{
int a=5;
int r=fun(a++)+fun(++a)+fun(a);
printf("%d\n",r);
return 0;
}
