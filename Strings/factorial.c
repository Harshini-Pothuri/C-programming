#include<stdio.h>
long int factorial(int);
int main()
{
		int n,r;
		long int f1,f2,f3,ncr;
		printf("Enter n,r values");
		scanf("%d %d",&n,&r);
		f1=factorial(n);
		f2=factorial(n-r);
		f3=factorial(r);
		ncr=f1/(f2*f3);
		printf("Result is %ld",ncr);
		return 0;
}
long int factorial(int x)
{
	long int f=1,i;
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	return f;
}
