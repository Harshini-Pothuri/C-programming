#include<stdio.h>
int main()
{
	int a[20],n,i,key,t=0,pos;
	printf("Enter size of an array:\n");
     scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter your number:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			t=1;
			pos=i+1;
			break;
		}
	}
		if(t==1)
		{
			printf("Element is in array located at %d",pos);
	    }
	    else
	    {
	    	printf("Not in array");
		}
	return 0;
}
