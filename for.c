/* 5
 * 5 4
 * 5 4 3
 * 5 4 3 2
 * 5 4 3 2 1 */
#include<stdio.h>
void main()
{
for(int i=1;i<=5;i++)
{
int n=5;
for(int j=1;j<=i;j++)
{
printf("%d ",n);
n--;
}
printf("\n");
}
}
