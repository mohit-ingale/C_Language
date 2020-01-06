#include<stdio.h>
#include<string.h>
char* any(char[],char[]);
void main()
{
	char str1[20],str2[20];
	char *pos='\0';

	printf("Enter first string\n");
	gets(str1);
	printf("Enter second string\n");
	gets(str2);
	pos=any(str1,str2);
	if((pos-str1)>20||(pos-str1)<0)
		printf("No string found\n");
	else
		printf("\nPosition of first match string: %d \n",(pos-str1)+1);
}

char* any(char str1[],char str2[])
{
	char temp[10],*pos='\0';
	int i=0,j=0;
	while(str2[i])
	{
		if(str2[i]==' ')
		{	
			temp[j]='\0';
			if(strstr(str1,temp))
			{
				pos=strstr(str1,temp);
				break;
			}
			else
			{	
				i++;
				j=0;
				continue;
			}
		}
		temp[j]=str2[i];
		i++;
		j++;
	}
	temp[j]='\0';
	if(strstr(str1,temp))
		pos=strstr(str1,temp);
	return pos;
}
