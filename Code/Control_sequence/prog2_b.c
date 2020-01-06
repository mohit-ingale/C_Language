/*Develop a C program which accepts character type data item from user. In case if user
typed
‘A’ or ‘a’ , it should display A for Apple
‘B’ or ‘b’ , it should display B for Bat
‘D’ or ‘d’ , it should display D for Dog
‘F’ or ‘f’ , it should display F for Fan
Instead of the above 4 characters, if user types any other character, it should display
“Character is not in the range”. Program using Switch statemnet*/
#include<stdio.h>
#include<string.h>

void main()
{
	char ch;

	printf("Enter a character from 'a','b','d','f':");
	ch=getchar();
	ch=tolower(ch);
	switch(ch)
	{
		case 'a':
		{
			printf("A for APPLE\n");
			break;
		}
		case 'b':
		{
			printf("B for BAT\n");
			break;
		}
		case 'd':
		{
			printf("D for DOG\n");
			break;
		}
		case 'f':
		{
			printf("F for FAN\n");
			break;
		}
		default:
			printf("Entered character is not in range\n");
	}
}
