#include<stdio.h>
int main()
{
	char a[100],b[100];
	int len,len2,i,j,t,flag=0;
	printf("Enter any string:");
	scanf("%[^\n]",&a);
	printf("Enter any string:");
	scanf("%s",&b);
	len=0;
	for(i=0;a[i]!='\0';i++)
	{
		len++;
    }
    printf("Length of the string is: %d\n",len);
    len2=strlen(b);
    printf("Length of the string is: %d\n",len2);
	for(i=0;a[i]!='\0';i++)
    {
    	b[i]=a[i];
	}
	b[i]='\0';
	printf("Copied string is: %s\n",b);
	for(i=0;i<len/2;i++)
    {
    	t=b[i];
    	b[i]=b[len-i-1];
    	b[len-i-1]=t;
	}
	printf("Reversed string is: %s\n",b);
	for(i=0;i<=len2;i++)
	{
		a[len+i]=b[i];
	}
	printf("After joining is: %s\n",a);
	return 0;
}
