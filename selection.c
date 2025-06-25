#include<stdio.h>
void good(int a[],int s)
{
	for(int i=0;i<s;i++)
	{
		for(int j=i+1;j<s-1;j++)
		{
			if(a[i]<a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(int i=0;i<s;i++)
	{
		printf("%d ",a[i]);
	}
}
void main()
{
	int a[]={6,12,8,3,0};
	int ele=sizeof(a)/sizeof(a[0]);
	good(a,ele);
}
