#include<stdio.h>

enum DataType
{
INT,FLOAT,CHAR
};
union Myunion
{
int i;
float f;
char c;
enum DataType type;
};
void main()
{
union Myunion u;
u.type=CHAR;

switch(u.type)
{
case INT:
u.i=42;
printf("Value of i:%d\n",u.i);
break;
case FLOAT:
u.f=3.14;
printf("Value of f:%.3f\n",u.f);
break;
case CHAR:
u.c='B';
printf("Value of c:%c\n",u.c);
break;
}
}
