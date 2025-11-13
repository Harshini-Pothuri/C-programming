#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],d[100];
	int len;
	printf("enter any string:");
	scanf("%s",a);
	printf("String is %s \n",a);
	len=strlen(a);
	printf("Length of string is %d\n",len);
	strcpy(d,a);
	printf("Copied string is %s\n",d);
	strrev(d);
	printf("Reversed string is %s\n",d);
	strcat(a,d);
	printf("After joining %s\n",a);
	return 0;
}
