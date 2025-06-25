#include<stdio.h>
void ascend(int arr[],int s)
{
	for(int i=0;i<s-1;i++)
	{
		for(int j=0;j<s-1-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	for(int i=0;i<s;i++)
	{
		printf("%d ",arr[i]);
	}
}
void main()
{
	int a[]={4,6,8,2,5};
	int ele=sizeof(a)/sizeof(a[0]);
	ascend(a,ele);
}
