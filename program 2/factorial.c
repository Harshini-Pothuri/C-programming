#include<stdio.h>
int main()
{
	int x,n,s;
	printf("enter n value");
	scanf("%d",&n);
	x=1,s=1;
	while(x<=n)
	{
		s=s*x;
		x=x+1;
	}
	printf("Factorial is %d",s);
	return 0;
}
