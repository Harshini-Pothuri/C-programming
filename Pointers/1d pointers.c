#include<stdio.h>
int main()
{
	int a[3]={2,3,4,5};
	int *p;
	p=a;
	printf("%d %d %d %d",*p,*p,*p,*p);
	return 0;
}
