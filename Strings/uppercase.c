#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int upr=0,lwr=0,i;
	printf("Enter any String:");
	scanf("%[^\n]",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			upr++;
		}
	}
	printf("Number of uppercase Letters are:%d\n",upr);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			lwr++;
		}
	}
	printf("Number of lowercase Letters are:%d",lwr);
	return 0;
}
