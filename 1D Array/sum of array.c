#include<stdio.h>
int main()
{
	int a[20],n,i,s;
	printf("Enter size of an array:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	s=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("The sum is %d",s);
	return 0;
}
