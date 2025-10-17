#include<stdio.h>
int main()
{
	int n,rev=0,r,t;
	printf("enter n value");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		r=t%10;
		rev=rev*10+r;
		t=t/10;
	}
	if(n==rev)
	printf("%d is palindrome number",n);
	else
	printf("%d is not a palindrome number",n);
	return 0;
}
