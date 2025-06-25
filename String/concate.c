#include<stdio.h>
void main()
{
	char s[20]="Apprecom";
	char d[]="India";
	int i=0,j=0;
	while(s[i])
	{
		i++;
	}
	while(d[j])
	{
		s[i]=d[j];
		i++,j++;
	}
	s[i]='\0';
	printf("%s\n",s);
}
