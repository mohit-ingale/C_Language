/*Write a program to read English text to end-of-data (type control-D to indicate end of data at a terminal, see below for detecting it), and print a count of word lengths, i.e. the total number of words of length 1 which occurred, the number of length 2, and so on. Define a word to be a sequence of alphabetic characters.*/
#include<stdio.h>

void main()
{
	char arr[200];
	int ct[25]={0},cnt=0,i=0;
	printf("Enter the text:");
	scanf("%[^'$']s",arr);
	while(arr[i])
	{
		if(arr[i]==' '||arr[i]=='\n')			//Count alphabets for each word till space or lb
		{	
			if(cnt==0)
			{
				i++;
				continue;
			}
			ct[cnt-1]=ct[cnt-1]+1;
			cnt=0;
			i++;
			continue;
		}
		i++;
		cnt++;
	}
	for(i=0;i<25;i++)
		printf("\nLength %d: %d occurances",i+1,ct[i]);
	printf("\n");
}
