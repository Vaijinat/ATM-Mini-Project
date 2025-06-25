#include<stdio.h>
typedef union
{
int i;
float f;
char ch;
}Myunion;
void main()
{
Myunion g;
g.i=45;
printf("%d\n",g.i);
g.f=7.8;
printf("%.2f\n",g.f);
}
