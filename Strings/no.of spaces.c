#include<stdio.h>
int main()
{   char s[3];
	int spaces=0,i;
	printf("Enter any string:");
	scanf("%[^\n]",s);
	for(i=0;s[i]!='\0';i++)
	{
	   if(s[i]==' ')
	   {
	   	spaces++;
	   }
	}
	printf("The number of spaces in a given string is:%d",spaces);
	return 0;
}
