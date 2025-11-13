#include<stdio.h>
int main()
{
	char a[100],b[100];
	int len,len2,i,j,t,flag=0;
	printf("Enter any two strings :");
	scanf("%[^\n]\n",&a);
	scanf("%[^\n]",&b);
	len=0;
	for(i=0;a[i]!='\0';i++)
	{
		len++;
    }
    printf("Length of the string is:%d\n",len);
    len2=strlen(b);
    printf("Length of another string is:%d\n",len2);
		for(i=0;a[i]!='\0'||b[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("Strings are not Same");
	else
	printf("Strings are Same");
	return 0;
}
