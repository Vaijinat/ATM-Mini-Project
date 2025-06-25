#include<stdio.h>
union Data
{
int *ip;
float *fp;
};
void main()
{
union Data d;
int n=42;
d.ip=&n;
printf("Value: %d\n", *d.ip);

float j=4.13;
d.fp=&j;
printf("Value: %.2f\n", *d.fp);
}
