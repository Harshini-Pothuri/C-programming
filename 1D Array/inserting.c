#include<stdio.h>
int main()
{
	int a[20],n,i,key,p;
	printf("Enter size of an array:\n");
	scanf("%d",&n);
	printf("Enter %d Elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be insert:");
	scanf("%d",&key);
	printf("Enter the position:");
	scanf("%d",&p);
	n=n+1;
	for(i=n-1;i>=p;i--)
	{
		a[i]=a[i-1];
	}
	a[i]=key;
	printf("Element after insertion:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}
