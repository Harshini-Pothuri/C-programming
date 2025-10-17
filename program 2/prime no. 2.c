#include<stdio.h>
int main()
{
	int n,i,s;
	printf("Enter n value:");
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			s=s+1;
		}
	}
	if(s==2)
	{
	printf("%d is a prime",n);
	}
	else
	{
		printf("%d is not a prime",n);
		return 0;
	}
}
