#include<stdio.h>
union Myunion
{
int i;
float f;
char c;
}c;
void main()
{
union Myunion u;
u.i=42;
u.f=3.14;
u.c='A';
printf("%d\n",u.i);//prints garbage value//
//printf("%.2f\n",u.f);
printf("%c\n",u.c);
printf("%ld\n",sizeof(u));
}
