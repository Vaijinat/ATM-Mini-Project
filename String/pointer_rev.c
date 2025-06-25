#include<stdio.h>
#include<string.h>
void main()
{
char s[30];
printf("Enter the string\n");
scanf("%[^\n]",s);
int l=strlen(s);
char *p=s;
char *q=s+(l-1);
while(p<q)
{
char t=*p;
*p=*q;
*q=t;
p++,q--;
}
printf("%s\n",s);
}
