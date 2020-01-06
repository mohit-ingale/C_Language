/*Write a program to count the vowels and letters in free text given as standard input. Read text a character at a time until you encounter end-of-data. Then print out the number of occurrences of each of the vowels a, e, i, o and u in the text, the total number of letters, and each of the vowels as an integer percentage of the letter total.*/
#include<stdio.h>

void main()
{
	char ch;
	int a=0,e=0,i=0,o=0,u=0,r=0,ct=0;
	printf("Enter a character at a time:\n");
	while((ch=getchar())>='a'&&ch<='z')
	{
		getchar();
		if(ch=='a')
			a++;
		else if(ch=='e')
			e++;
		else if(ch=='i')
			i++;
		else if(ch=='o')
			o++;
		else if(ch=='u')
			u++;
		else
			r++;
		ct++;
	}
	printf("Number of characters:\na %d;e %d;i %d;o %d;u %d;rest %d\n",a,e,i,o,u,r);
	printf("Percentage of total:\n");
	printf("a %.2f% ;e %.2f% ;i %.2f% ;o %.2f% ;u %.2f% ;rest %.2f%\n",(float)a*100/ct,(float)e*100/ct,(float)i*100/ct,(float)o*100/ct,(float)u*100/ct,(float)r*100/ct);
}
