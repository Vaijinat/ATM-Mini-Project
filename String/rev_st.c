/*#include<stdio.h>
#include<string.h>
void main()
{
char s[]="and";
int i;
i=strlen(s);
fan:
--i;
printf("%c",s[i]);
//i--;
if(i!=0)
goto fan;
}*/
#include<stdio.h>
#include<string.h>
void main()
{
char s[]="donkey";
int i=0;
i=strlen(s);
//printf("%d",i);
god:
printf("%c",s[i]);i--;
if(i!=-1)
goto god;
}

