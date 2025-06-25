#include<stdio.h>
#include<string.h>
struct Data
{
int x;
char name[20];
float f;
};
struct Data processData(struct Data d)
{
d.x+=10;
strcpy(d.name,"Chutney");
d.f=d.f*2.0;
return d;
}
void main()
{
struct Data v;
//v=(struct Data){40,"Roman",7.8};
v.x=40;
strcpy(v.name,"Gagan");
v.f=3.14;
struct Data res=processData(v);

printf("%d %s %f\n",res.x,res.name,res.f);

}
