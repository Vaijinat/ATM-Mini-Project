#include<stdio.h>

union Myunion
{
int i;
float f;
char c;
};
void print(union Myunion u)
{
printf("Value : %c\n",u.c);
}
void main()
{
union Myunion u;
u.c='A';
print(u);
}
