#include<stdio.h>
#include<string.h>
struct Hot
{
	int x;
	char name[30];
	float f;
}v;

struct Hot processData(struct Hot *d)
{
	d->x+=20;
	strcpy(d->name,"charlie");
	d->f=d->f*2;//No need to return it modifies original data//
}
void main()
{
	v.x=12;
	strcpy(v.name,"Bob");
	v.f=3.14;

	processData(&v);

	printf("%d %s %f\n",v.x,v.name,v.f);

}
