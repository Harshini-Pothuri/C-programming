#include<stdio.h>
int main()
{
	int n,x;
	printf("Enter any number:");
	scanf("%d",&n);
	x=fact(n);
	printf("Factorial of a given number is %d",x);
	return 0;
}
int fact(int n)
{
	int x;
	{
		if(n==0)
		return 1;
		else
		return(n*fact(n-1));
	 } 
	 return x;
}
