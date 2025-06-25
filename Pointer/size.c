#include<stdio.h>
void main()
{
char ch='v',*p1=&ch;
int i=78,*p2=&i;
float f=23.0,*p3=&f;
double d=81.000000,*p4=&d;

printf("%d %d\n",sizeof(p1),sizeof(*p1));
printf("%d %d\n",sizeof(p2),sizeof(*p2));
printf("%d %d\n",sizeof(p3),sizeof(*p3));
printf("%d %d\n",sizeof(p4),sizeof(*p4));

printf("char: =%u\n",p1);
printf("int : =%u\n",p2);
printf("float : =%u\n",p3);

p1=p1+2;p2++;p3++;
printf("char: =%u\n",p1);
printf("int : =%u\n",p2);
printf("float : =%u\n",p3);
}
