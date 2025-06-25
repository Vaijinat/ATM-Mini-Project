/*#include<stdio.h>
void main()
{
int arr[]={5,10,15};
int *p=arr;
++(*p);
printf("%d\n",*p);
++p;
printf("%d\n",*p);
}

#include<stdio.h>
void main()
{
int arr[]={10,20,30,40};
int *p=arr;
printf("%d\n",2[p]);
}*/

#include<stdio.h>
void main()
{
int s[2]={100,200};
int *p=s+1;
printf("%d\n",*(p-1));
}
