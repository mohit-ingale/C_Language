/*Write a program to read your name into a character array. Print the name along with the length of your name and sizeof the array in which name is stored.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	int a;
	printf("enter your name: ");
	scanf("%s",name);
	printf("\nname: %s\n",name);
	a=strlen(name);
	printf("length of name is : %d \n",a);
	a=sizeof(name);
	printf("size of array is : %d \n",a);
}
