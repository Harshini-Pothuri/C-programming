#include<stdio.h>
int main()
{
	int n,rev=0,r,t;
	printf("Enter n value:");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		r=t%10;
		rev=rev*10+r;
		printf("r=%d,rev=%d\n",r,rev);
		t=t/10;
	}
	printf("Reverse of %d is %d",n,rev);
	return 0;
}
