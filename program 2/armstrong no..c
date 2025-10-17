#include<stdio.h>
int main()
{
	int n,s=0,r,t,dig=0;
	printf("Enter n value:");
	scanf("%d",&n);
	t=n;
	// Logic for counting digits
	while(t>0)
	{
		r=t%10;       // to get the digit
		dig=dig+1;   //to count the digits
		t=t/10;
	}
	t=n;
	while(t>0)
	{
		r=t%10;
		s=s+pow(r,dig);
		t=t/10;
	}
	if(n==s)
	printf("%d is Armstrong number ",n);
	else
	printf("%d is not a Armstrong number ",n);
	return 0;
}
