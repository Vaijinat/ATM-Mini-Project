/*//Declaring Entire structure into unother //
#include<stdio.h>
#include<string.h>
struct student
{
char name[20];
int rn;
struct address
{
int dno;
char city[10];
}a,b;//member of struct address//
};
void main()
{
struct student s={"Alice",12};

s.a.dno=54;
s.b.dno=87;
strcpy(s.a.city,"jaipur");
strcpy(s.b.city,"Madurai");

printf("%s %d\n",s.name,s.rn);

printf("%d %s\n",s.a.dno,s.a.city);
printf("%d %s\n",s.b.dno,s.b.city);
}*/

#include<stdio.h>
#include<string.h>
struct Bike
{
int id;
char n[20];
float price;
};
///////////////////
struct Fruit
{
int count;
char name[20];
struct Bike h;
};
void main()
{
struct Fruit  f1={22,"Mango"};
f1.h.id=11;
strcpy(f1.h.n,"Royal Enfield");
f1.h.price=135.89;

printf("%d %s\n",f1.count,f1.name);

printf("%d %s %f\n",f1.h.id,f1.h.n,f1.h.price);
}
