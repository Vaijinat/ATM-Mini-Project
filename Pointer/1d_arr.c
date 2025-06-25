#include<stdio.h>
void main()
{
int a[5]={1,2,3,4,5};
int *p=a;
int (*ptr)[5]=a;

printf("%d %x\n",*p,*ptr);
printf("%x %x\n",p,ptr);

//printf("Value of array [%d]=%d\t",i,*(i+p));
//printf("Address of array [%d]=%u\n",i,p+i);
}

