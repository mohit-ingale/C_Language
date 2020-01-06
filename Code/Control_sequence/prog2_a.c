/*Develop a C program which accepts character type data item from user. In case if user
typed
‘A’ or ‘a’ , it should display A for Apple
‘B’ or ‘b’ , it should display B for Bat
‘D’ or ‘d’ , it should display D for Dog
‘F’ or ‘f’ , it should display F for Fan
Instead of the above 4 characters, if user types any other character, it should display
“Character is not in the range”. Program using if-else statements*/
#include<stdio.h>
#include<string.h>
void main()
{
	char ch;

	printf("Enter a character from 'a','b','d','f':");
	ch=getchar();

	if(ch=='a'||ch=='A')
		printf("A for APPLE\n");
	else if(ch=='b'||ch=='B')
		printf("B for BAT\n");
	else if(ch=='d'||ch=='D')
		printf("D for DOG\n");
	else if(ch=='f'||ch=='F')
		printf("F for FAN\n");
	else
		printf("Character not in range\n");

}
