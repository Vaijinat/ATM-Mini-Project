#include<stdio.h>
void reverse(char m[],int l)
{
for(int i=0,j=l-1;i<j;i++,j--)
{
char t=m[i];
m[i]=m[j];
m[j]=t;
}
printf("%s\n",m);
}
void main()
{
char s[20];
printf("Enter the string\n");
scanf("%[^\n]",s);
int l;
for(l=0;s[l];l++);
reverse(s,l);
}
