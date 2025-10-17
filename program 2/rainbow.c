#include<stdio.h>
int main()
{
	char n;
	printf("Choose a letter from VIBGYOR");
	scanf("%c",&n);
	if(n=='v'||n=='V')
	{
		printf("Violet\n");
	}
	else if(n=='i'||n=='I')
	{
		printf("Indigo\n");
	}
	else if(n=='b'||n=='B')
	{
		printf("Blue\n");
	}
	else if(n=='g'||n=='G')
	{
		printf("Green\n");
	}
	else if(n=='y'||n=='Y')
	{
		printf("Yellow\n");
	}
		else if(n=='o'||n=='O')
	{
		printf("Orange\n");
	}
	else if(n=='r'||n=='R')
	{
		printf("Red\n");
	}
	return 0;
}
