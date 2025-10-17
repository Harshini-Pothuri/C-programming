#include<stdio.h>
int main()
{
	int a,b,c,d,x;
	printf("enter a,b,c,d values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	x=a/b*c-b+a*d/3;
	printf("x is %d",x);
	return 0;
}
