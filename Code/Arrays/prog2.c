/*Use scanf function to read a string of characters (into character type array called text) including alphabets, digits, blanks, tabs etc except new line character. Write a loop that will examine each character in a character-type array and determine how many of the characters are letters, how many are digits, how many are blanks and how many are tabs. Assume that text contains 80 characters.*/
#include <stdio.h>
#include <string.h>
void main()
{
	char text[80];
	int i,al=0,num=0,spc=0,ta=0;
	printf("Enter the string\n");
	printf("Enter $ at the endof string:");
	scanf("%[^'$']s",text);
	
	for(i=0;i<strlen(text);i++)
	{
		if((text[i]>='A' && text[i]<='Z')||(text[i]>='a' && text[i]<='z'))		//If alphabet
			al++;
		else if(text[i]>='0' && text[i]<='9')						//If digit
			num++;
		else if(text[i]==' ')								//If space
			spc++;
		else if(text[i]=='\t')								//If tab
			ta++;
	}
	printf("number of alphabet is: %d \nnumber of digits is: %d \nnumber of spaces is: %d \n number of tabs is: %d \n",al,num,spc,ta);
}
