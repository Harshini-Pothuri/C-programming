#include<stdio.h>
int main()
{
	int a[20],n,i;
	printf("Enter size of an array:\n");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]*2);
	}
	return 0;
}
