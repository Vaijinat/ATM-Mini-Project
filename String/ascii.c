#include<stdio.h>
#include<string.h>
int main()
{
	char s[20]="abcde";
	char s1[20]="klmno";
	int l1=0,l2=0,s1=0,s2=0;
	l1=strlen(s);
	l2=strlen(s1);

	if(l1!=l2)
	{
		printf("Invalid choice\n");
		return;
	}

	for(int i=0;s[i];i++)
	{
		if(s[i]>='a'&&s[i]<='z')
			s1=s1+(s[i]-'a'+1);
	}
	for(int i=0;s1[i];i++)
	{
		if(s1[i]>='a'&&s1[i]<='z')
			s2=s2+(s1[i]-'a'+1);
	}

	if((s1%2==0)&&(s2%2==0))
		return 1;
	else
		return;
