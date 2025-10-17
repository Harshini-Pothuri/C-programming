#include<stdio.h>
int main()
{
	int a[20],n,i,j,min,t;
	printf("Enter size of an array:\n");
     scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
	printf("Elements after sorting: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
