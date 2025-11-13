#include<stdio.h>
int main()
{
	int n,x;
	printf("Enter any number:");
	scanf("%d",&n);
	x=fib(n);
	printf("Fibanocci series is %d",x);
	return 0;
}
int fib(int n)
{
	int n;
	{
		if(n==0)
		return 0;
		else if(n==1)
		return 1;
		else
		return (fib(n-1)+fib(n-2));
	 } 
}
