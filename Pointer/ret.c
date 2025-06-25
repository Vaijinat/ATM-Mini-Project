/*#include<stdio.h>
int *fun(int *k,int n)
{
k=k+2;
return k;
}
void main()
{
int a[]={2,3,4,5,6},*p,r;
//int n=5;
p=fun(a,5);
printf("a=%d\n p=%d\n *p=%d\n",a,p,*p);
}*/

#include<stdio.h>
void  fun(int a[])
{
	for(int i=0;i<5;i++)
	{
		a[i]=a[i]^1;
		a[i]=a[i]|1;
		printf("%d ",a[i]);
	}
	printf("\n");
}
void main()
{
	int a[]={5,7,9,11,13};
	fun(a);
}
