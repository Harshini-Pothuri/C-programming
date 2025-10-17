#include<stdio.h>
int main()
{
	int a[20],n,i,key,flag=0,pos,left,right,mid;
	printf("Enter size of an array:\n");
     scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter your number:");
	scanf("%d",&key);
	left=0,right=n-1;
	while(left<=right)
	{
	mid=(left+right)/2;
	if(a[mid]==key)
	   {
		flag=1;
		pos=mid+1;
		break;
	   }
	    else if(key<a[mid])
		{
			right=mid-1;
			pos=i+1;
		}
		else if(key>a[mid])
		{
			left=mid+1;
		}
	}
	    if(flag==1)
		{
			printf("Element is in array located at %d",pos);
	    }
	    else
	    {
	    	printf("Not in array");
		}
	return 0;
}
