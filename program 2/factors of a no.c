#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter n value");
	scanf("%d",&n);
	while(i<=n)
	{
	if(n % i==0)
	printf("%d\n",i);
	i=i+1;
	}
	return 0;
}
