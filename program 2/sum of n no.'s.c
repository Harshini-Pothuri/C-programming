#include<stdio.h>
int main()
{
	int x,n,s;
	printf("enter n value");
	scanf("%d",&n);
	x=1,s=0;
	while(x<=n)
	{
		s=s+x;
		x=x+1;
	}
	printf("sum is %d",s);
	return 0;
}
