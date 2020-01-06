#include <stdio.h>
#include<string.h>
char * strrev(char *str)

{

    int i = strlen(str)-1,j=0;

    char ch;
    while(i>j)
    {
        ch = str[i];
        str[i]= str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}
int main()
{
    char str[100],str1[100];
    int i;
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    	str1[i]=str[i];
    strrev(str);
    if((strcmp(str,str1))==0)
    	printf("YES");
    else
    	printf("NO");
    return 0;
}

