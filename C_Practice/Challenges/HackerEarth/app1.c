#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char s[100];
	int len,i;
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
			s[i]=tolower(s[i]);
		else if(s[i]>='a'&&s[i]<='z')
			s[i]=toupper(s[i]);
	}
	puts(s);
}
