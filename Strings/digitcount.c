#include<stdio.h>
int main()
{   char s[100];
	int count=0,i;
	printf("Enter any string:");
	scanf("%[^\n]",s);
	for(i=0;s[i]!='\0';i++)
	{ 
	  if(s[i]>='0'&&s[i]<='9')
	  {
	  	count++;
	}	
	}
	printf("Number of digits in the given string is %d",count);
}
