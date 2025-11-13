#include<stdio.h>
int main()
{
	char a[100];
	int i;
	printf("Enter any string:");
	scanf("%[^\n]",&a);
	if(a[i]<='a'&&a[i]>='z');
	{
		a[i]=a[i]-32;
	}
	printf("Sententialcase is:%s",a);
	return 0;
}
