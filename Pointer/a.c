/*#include<stdio.h>
void main()
{
int a[]={1,2,3,4,5};
int *p=a;
printf("%d ",*p++);
printf("%d ",(*p)++);
printf("%d ",*p);
printf("%d ",a[1]);
}*/
#include<stdio.h>
void main()
{
int a[5]={2,4,6,8,10},*p;
p=a;
for(int i=0;i<5;i++)
{
printf("%d %d %d ",*(p+i),p[i],*(i+p));
}
}
