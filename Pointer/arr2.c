/*#include<stdio.h>
void modify(int *arr,int s)
{
for(int i=0;i<s;i++)
{
arr[i]=arr[i]*2;
}
}
void main()
{
int a[4]={1,2,3,4};
modify(a,4);
for(int i=0;i<4;i++)
{
printf("%d ",a[i]);
}
}*/
#include<stdio.h>
void main()
{
int a[5]={5,10,15,20,25};
int *p1=(char *)&a[1];
int *p2=(char *)&a[3];
printf("%ld\n",p2-p1);//3-1=2;
printf("%x\n",&a[1]);//3-1=2;
}

