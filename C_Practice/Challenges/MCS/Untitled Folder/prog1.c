/*
Problem statement
strcpy in C copies the string in one character array to another array. Write your own implementation of this function.

Input
You need to write the body of function with signature: void myStrCpy(char *src,char *dest); where src is pointer to the source and dest is pointer to the destination array.

Output
Your function must copy the string from source to destination array.

*/

#include<stdio.h>
void myStrcpy(char *,char *);
int main()
{
	char str[]="hello";
	char str1[10];
	myStrcpy(str,str1);
	puts(str1);
}


void myStrcpy(char *src,char *dest)
{
   while(*src)
   {
       *dest=*src;
       dest++;
       src++;
   }
   *dest='\0';
}
