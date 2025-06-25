#include<stdio.h>
struct Data
{
int temp;
float voltage;
char status;
};
void main()
{
struct Data s1;
s1.temp=28;
s1.voltage=3.3;
s1.status='N';

printf("Temp:%d\n Volt:%.2fV\n Status:%c\n",s1.temp,s1.voltage,s1.status);

struct Data *p=&s1;
p->temp=37;
p->voltage=4.5;
p->status='H';

printf("Temp:%d\n Volt:%.2fV\n Status:%c\n",p->temp,p->voltage,p->status);
}
