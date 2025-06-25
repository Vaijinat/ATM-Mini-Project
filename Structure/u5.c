#include<stdio.h>
union Num
{
int i;
float f;
};
void main()
{
union Num n[5];
for(int j=0;j<5;j++)
{
n[j].f=j;
printf("Integer :%d, Float :%.2f\n",n[j].i,n[j].f);
}
}
