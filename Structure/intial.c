#include<stdio.h>
#include<string.h>
struct Data
{
int x;
char name[20];
float f;
};
void main()
{
struct Data d1= {10,"Alice",3.14};
printf("%d %s %f\n",d1.x,d1.name,d1.f);

struct Data d2={.x=20,.name="Bob",.f=2.71};
printf("%d %s %f\n",d2.x,d2.name,d2.f);

struct Data d3;
d3.x=30;
strcpy(d3.name,"Charlie");
d3.f=1.61;
printf("%d %s %f\n",d3.x,d3.name,d3.f);

struct Data d5;
d5=(struct Data){50,"Eve",6.28};
printf("%d %s %f\n",d5.x,d5.name,d5.f);
}
