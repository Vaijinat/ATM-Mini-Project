/*#include<stdio.h>
int *fun()
{
static int x=10;
return &x;
}
void main()
{
int *p=fun();
printf("%d\n",*p);
}*/
#include<stdio.h>
#include<stdlib.h>

int *fun()
{
	int *x=malloc(sizeof(int));
	if(x==NULL)
	{
		printf("Memory allocation failed\n");
		return 0;
	}
	*x=30;
	return x;
}
void main()
{
	int *p=fun();

	if(p!=0)
	{
		printf("%d\n",*p);
		*p=50;
		printf("Modified :%d\n",*p);
		free(p);
	}
}
